class Solution {
public:
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
        vector<int>G[N+2];
        for(int i=0;i<paths.size();i++){
            int x=paths[i][0];
            int y=paths[i][1];
            G[x].push_back(y);
            G[y].push_back(x);
        }
        int vis[N+2];
        memset(vis,0,sizeof(vis));
        vector<int>ret;
        for(int i=1;i<=N;i++){
         //   cout<<i<<endl;
            int tmv[]={0,0,0,0,0};
            for(int j=0;j<G[i].size();j++){
                if(vis[G[i][j]]>0){
                    tmv[vis[G[i][j]]]=1;
                }
            }
            for(int z=1;z<=4;z++){
                if(tmv[z]==0){
                    vis[i]=z;
                    ret.push_back(z);
                    break;
                }
            }
        }
        return ret;
    }
};
