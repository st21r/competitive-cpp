template <typename T>
class SegmentTree {
    inline T f(T x, T y) {
        return min(x, y);
    }
    
    vector<T> data;
public:
    int n;
    T init_val;
    SegmentTree(int size, T ide_ele=(ll)1e18) : init_val(ide_ele) {
        n = 1;
        while (n < size) n <<= 1;
        data.assign(2*n, init_val);
    }
    void build(vector<T> &a) {
        rep(i, (int)a.size()) {
            data[n+i] = a[i];
        }
        for (int i = n-1; i >= 0; i--) {
            data[i] = f(data[i*2], data[i*2+1]);
        }
    }
    void update(int i, T x) {
        i += n;
        data[i] = x;
        while (i > 1) {
            i >>= 1;
            data[i] = f(data[i*2], data[i*2+1]);
        }
    }
    T query(int l, int r) {
        l += n; r += n;
        T res = init_val;
        while (l < r) {
            if (l & 1) {
                res = f(res, data[l]);
                l += 1;
            }
            if (r & 1) {
                res = f(res, data[r-1]);
            }
            l >>= 1; r >>= 1;
        }
        return res;
    }
    const T &operator [] (size_t i) const { return data[i+n]; }
};
