class Cumsum2d {
    int h, w;
    vvi data;
public:
    Cumsum2d(int h, int w) : h(h), w(w), data(h+1, vi(w+1)) {}
    void build(vvi &s) {
        rep(i, h) rep(j, w) {
            data[i+1][j+1] += data[i][j+1] + data[i+1][j] - data[i][j] + s[i][j];
        }
    }
    ll query(int y1, int x1, int y2, int x2) {
        if (y1 > y2 or x1 > x2) return -1;
        if (y1 < 0 or x1 < 0 or y2 > h or x2 > w) return -1;
        return data[y2][x2] - data[y1][x2] - data[y2][x1] + data[y1][x1];
    }
};