struct node{
  int u,w;
  node(int _u,int _w){
      u=_u;
      w=_w;
  }
  bool operator<(node const &p) const {
      return w>p.w;
  }
};
vector<int> Solution::solve(int A, vector<vector<int> > &B, int C) {
    vector<int>G[A+1],cost[A+1];
    int dis[A+1];
    for(int i=0;i<=A;i++)dis[i]=1<<28;
    for(int i=0;i<B.size();i++){
        int u=B[i][0];
        int v=B[i][1];
        int w=B[i][2];
        G[u].push_back(v);
        G[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }
    priority_queue<int>q;
    dis[C]=0;
    q.push(node(C,0));
    while(!q.empty()){
        node tmp=q.top();q.pop();
        int u=tmp.u;
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
            if(dis[u]+cost[u][i]<dis[v]){
                dis[v]=dis[u]+cost[u][i];
                q.push(node(v,dis[v]));
            }
        }
    }
    vector<int>ret;
    for(int i=0;i<A;i++){
        if(dis[i]==1<<28)ret.push_back(-1);
        else ret.push_back(dis[i]);
    }
    return ret;
}

