class Solution {
public:
    int par[1205];
    int find(int r){
        if(par[r]==r)return r;
        par[r]=find(par[r]);
        return par[r];
    }
    void Union(int a,int b){
        int u=find(a);
        int v=find(b);
        if(u!=v){
            par[u]=v;
        }
    }
    int findCircleNum(vector<vector<int>>& M) {
        int n=M.size();
        for(int i=0;i<n;i++){
            par[i]=i;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(M[i][j]==1){
                    Union(i,j);
                }
            }
        }
        for(int i=0;i<n;i++)int v=find(i);
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(par[i]);
        }
        return s.size();
    }
};
