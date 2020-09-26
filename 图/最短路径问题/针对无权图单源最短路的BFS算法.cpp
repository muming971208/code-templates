vector<vector<gg>> graph(MAX);
// dis�洢�������н������·������
vector<gg> dis(MAX);
void bfs(gg v) {
    vector<bool> inQueue(MAX);
    queue<gg> q;
    q.push(v);
    inQueue[v] = true;
    for (gg d = 0; not q.empty(); ++d) {
        gg s = q.size();
        for (gg i = 0; i < s; ++i) {
            v = q.front();
            q.pop();
            dis[v] = d;
            for (gg i : graph[v]) {
                if (not inQueue[i]) {
                    q.push(i);
                    inQueue[i] = true;
                }
            }
        }
    }
}