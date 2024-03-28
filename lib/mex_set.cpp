template <typename T>
struct MexSet {
    std::set<std::pair<T, T>> s;
  
    MexSet(T min_val = INT_MIN, T max_val = INT_MAX) {
        s.emplace(min_val, min_val);
        s.emplace(max_val, max_val);
    }
  
    bool contains(T x) const {
        auto it = std::prev(s.lower_bound(std::make_pair(x+1, x+1)));
        auto [l, u] = *it;
        return l <= x && x <= u;
    }
  
    bool insert(T x) {
        auto nit = s.lower_bound(std::make_pair(x+1, x+1));
        auto it = std::prev(nit);
        auto [l, r] = *it;
        auto [nl, nr] = *nit;
        if (l <= x and x <= r) return false;
        if (r == x-1) {
            if (nl == x+1) {
                s.erase(it);
                s.erase(nit);
                s.emplace(l, nr);
            } else {
                s.erase(it);
                s.emplace(l, x);
            }  
        } else {
            if (nl == x+1) {
                s.erase(nit);
                s.emplace(x, nr);
            }   else {
                s.emplace(x, x);
            }
        }
        return true;
    }  
    
    bool del(T x) {
        auto it = std::prev(s.lower_bound(std::make_pair(x+1, x+1)));
        auto [l, r] = *it;
        if (l > x or x > r) return false;
        s.erase(it);
        if (x < r) s.emplace(x+1, r);
        if (l < x) s.emplace(l, x-1);
        return true;
    }  
    T mex(T x = 0) const {
        auto [l, u] = *std::prev(s.lower_bound(std::make_pair(x+1, x+1)));
        if (l <= x && x <= u) return u+1;
        return x;
    }
};