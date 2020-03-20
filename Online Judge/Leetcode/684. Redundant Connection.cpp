class Solution {
public:
    int par[10005];
    int find(int r){
        if(par[r]==r)return r;
        par[r]=find(par[r]);
        return par[r];
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int b1,b2;
        for(int i=0;i<=2000;i++)par[i]=i;
        for(int i=0;i<edges.size();i++){
            int a=edges[i][0];
            int b=edges[i][1];
            int u=find(a);
            int v=find(b);
            if(u==v){
                b1=a;
                b2=b;
            }
            else{
                par[u]=v;
            }
        }
        vector<int>ret;
        ret.push_back(b1);
        ret.push_back(b2);
        return ret;
    }
};
