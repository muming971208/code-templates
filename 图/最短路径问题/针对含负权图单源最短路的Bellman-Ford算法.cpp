bool bellmanFord(gg s) {  //����true����s�ܹ�����һ������
    const gg INF = 0x3fffffff;
    queue<gg> q;
    memset(inQueue, 0, sizeof(inQueue));
    memset(num, 0, sizeof(num));  // num[i]��ʾ���i����˶��ٴ�,��������Ƿ��и���
    fill(dis, dis + MAX, INF);
    dis[s] = 0;
    inQueue[s] = true;
    q.push(s);
    while (!q.empty()) {
        gg u = q.front();
        q.pop();
        inQueue[u] = false;
        for (gg i : graph[u]) {
            Edge& e = edges[i];
            if (dis[u] < INF && dis[e.to] > dis[u] + e.cost) {
                dis[e.to] = dis[u] + e.cost;
                if (!inQueue[e.to]) {
                    q.push(e.to);
                    inQueue[e.to] = true;
                    if (++num[e.to] > MAX)
                        return false;
                }
            }
        }
    }
    return true;
}
