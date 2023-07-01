#pragma region my_template
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
 
using namespace std;
using ll = long long;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using ti = tuple<int, int, int>;
using tl = tuple<ll, ll, ll>;
using vi = vector<int>;
using vpi = vector<pi>;
using vti = vector<ti>;
using vvi = vector<vi>;
using usi = unordered_set<int>;
using vl = vector<ll>;
using vpl = vector<pl>;
using vtl = vector<tl>;
using vvl = vector<vl>;
using usl = unordered_set<ll>;
 
#define range(i, l, r) for(int i = (int)(l); i < (int)(r); i++)
#define rrange(i, l, r) for(int i = (int)(r)-1; i >= (int)(l); i--)
#define rep(i, n) range(i, 0, n)
#define rrep(i, n) rrange(i, 0, n)
#define len(a) ((int)(a).size())
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sum(a) accumulate(all(a), 0)
#define elif else if
 
namespace io {
    #ifdef LOCAL
    ofstream dout("./dmp.txt");
    #else
    ofstream dout("/dev/null");
    #endif
    template<typename T, typename U>
    istream &operator >> (istream &in, pair<T, U> &a){
        in >> a.first >> a.second;
        return in;
    }
    template<typename T>
    istream &operator >> (istream &in, vector<T> &a){
        for(T &x: a) in >> x;
        return in;
    }
    template<typename T, typename U>
    ostream &operator << (ostream &out, const pair<T, U> &a){
        out << a.first << " " << a.second;
        return out;
    }
    template<typename T>
    ostream &operator << (ostream &out, const vector<T> &a) {
        rep(i, len(a)) out << a[i] << (i == len(a)-1 ? "" : " ");
        return out;
    }
    template<typename T>
    ostream &operator << (ostream &out, const unordered_set<T> &a) {
        int i = 0;
        for (const T &x: a) { out << x << (i == len(a)-1 ? "" : " "); i++; }
        return out;
    }
    template<typename T>
    ostream &operator << (ostream &out, const set<T> &a) {
        int i = 0;
        for (const T &x: a) { out << x << (i == len(a)-1 ? "" : " "); i++; }
        return out;
    }
    template<typename T>
    ostream &operator << (ostream &out, const multiset<T> &a) {
        int i = 0;
        for (const T &x: a) { out << x << (i == len(a)-1 ? "" : " "); i++; }
        return out;
    }
    inline void print() { cout << "\n"; }
    template <typename T, typename ...U>
    inline void print(const T &t, const U &...u) {
        cout << t;
        if (sizeof...(u)) cout << " ";
        print(u...);
    }
    inline void dmp() { dout << endl; }
    template <typename T, typename ...U>
    inline void dmp(const T &t, const U &...u) {
        dout << t;
        if (sizeof...(u)) dout << " ";
        dmp(u...);
    }
}
using namespace io;
 
template<typename T> inline bool chmax(T &a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<typename T> inline bool chmin(T &a, T b) { if (a > b) { a = b; return 1; } return 0; }
void solve();

constexpr int INF = 1e9;
constexpr ll LINF = 1e18;
constexpr int MOD = 1e9+7;
//constexpr int MOD = 998244353;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    //cout << fixed << setprecision(15);
    solve();
    return 0;
}
#pragma endregion

void solve() {
    
}
