#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(a) a.begin(), a.end()
#define len(a) (int)a.size()
using namespace std;
using ll = long long;

using pi = pair<int, int>;
using pl = pair<ll, ll>;
using vi = vector<int>;
using vpi = vector<pi>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vpl = vector<pl>;
using vvl = vector<vl>;
constexpr int INF = 1e9;
constexpr ll LINF = 1e18;

template<typename T>
istream &operator >> (istream &in, vector<T> &a){
    for(T &x: a) in >> x;
    return in;
}
template<typename T, typename U>
istream &operator >> (istream &in, pair<T, U> &a){
    in >> a.first >> a.second;
    return in;
}
template<typename T>
ostream &operator << (ostream &out, const vector<T> &a) {
    rep(i, len(a)) out << a[i] << (i == len(a)-1 ? "" : " ");
    return out;
}
template<typename T, typename U>
ostream &operator << (ostream &out, const pair<T, U> &a){
    out << a.first << " " << a.second;
    return out;
}
inline void print() { cout << "\n"; }
template <typename T, typename ...U>
inline void print(const T &t, const U &...u) {
    cout << t;
    if (sizeof...(u)) cout << " ";
    print(u...);
}

using Graph = vector<vpi>;
vl dijkstra(const Graph &g, int s) {
    vl d(len(g), LINF);
    priority_queue<pl, vpl, greater<pl>> q;
    d[s] = 0;
    q.emplace(make_pair(0, s));
    while (!q.empty()) {
        auto [dist, v] = q.top(); q.pop();
        if (d[v] < dist) continue;
        for (auto &[nv, cost]: g[v]) {
            if (d[nv] > d[v] + cost) {
                d[nv] = d[v] + cost;
                q.emplace(make_pair(d[nv], nv));
            }
        }
    }
    return d;
}


int main() {
    int n, m, s; cin >> n >> m >> s;
    Graph g(n);
    rep(_, m) {
        int a, b, c; cin >> a >> b >> c;
        g[a].push_back({b, c});
    }
    vl dist = dijkstra(g, s);
    
    rep(i, n) {
        if (dist[i] == LINF) cout << "INF" << endl;
        else cout << dist[i] << endl;
    }
}

