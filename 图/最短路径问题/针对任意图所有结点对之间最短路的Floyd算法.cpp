//ͼ���ڽӾ���洢����Ϊ��Ȩͼ��graph[i][i]=0,��Ȩ�ļ�ΪȨֵ�������ΪINT_MAX
//��Ϊ��Ȩͼ����i��j֮���бߣ�graph[i][j]=1�������Ϊ0
vector<vector<gg>> graph(MAX, vector<gg>(MAX));
// dis�洢�������н���֮������·������
vector<gg> dis(MAX, vector<gg>(MAX));
void floyd() {
    for (gg i = 0; i < ni; ++i) {
        for (gg j = 0; j < ni; ++j) {
            dis[i][j] = graph[i][j];
        }
    }
    for (gg k = 0; k < ni; ++k) {
        for (gg i = 0; i < ni; ++i) {
            for (gg j = 0; j < ni; ++j) {
                dis[i][j] =
                    min(dis[i][j], dis[i][k] + dis[k][j]);  //��Ȩͼ���������
                dis[i][j] =
                    dis[i][j] || (dis[i][k] && dis[k][j]);  //��Ȩͼ���������
            }
        }
    }
}
