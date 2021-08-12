vl dijkstra(const Graph &g, int s) {
    vl d(len(g), LINF);
    priority_queue<pl, vector<pl>, greater<pl>> q;
    d[s] = 0;
    q.emplace(mp(0, s));
    while (!q.empty()) {
        auto [dist, v] = q.top(); q.pop();
        if (d[v] < dist) continue;
        for (auto &[nv, cost]: g[v]) {
            if (d[nv] > d[v] + cost) {
                d[nv] = d[v] + cost;
                q.emplace(mp(d[nv], nv));
            }
        }
    }
    return d;
}