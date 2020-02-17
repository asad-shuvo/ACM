class Solution {
public:
    vector<int>Grid[3000];
    int f=1;
    int cntG=0,cntW=0,cntB=0,G[2000],B[2000],W[2000];
    void dfs(int i){
        W[i]=0;
        G[i]=1;
        for(int k=0;k<Grid[i].size();k++){
            int v=Grid[i][k];
            if(G[v]==1){
                f=0;
                return;
            }
            if(B[v]==1)continue;
            if(W[v]==1){
                dfs(v);
            }
        }
        B[i]=1;
        G[i]=0;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        map<int,int>mp;
        for(int i=0;i<prerequisites.size();i++){
        int t1=prerequisites[i][0];
            int t2=prerequisites[i][1];
           Grid[t2].push_back(t1);
            mp[t1]++;
           // cout<<mp[1]<<endl;
        }
        for(int i=0;i<numCourses;i++){
            cntW++;
            W[i]=1;
        }
        for(int i=0;i<numCourses;i++){
            if(W[i]==1){
                dfs(i);
            }
        }
       // cout<<f<<endl;
         vector<int>v;
        if(f==0)return v;
        queue<int>q;
       
        int cnt=0;
        for(int i=0;i<numCourses;i++){
           // cout<<mp[i]<<endl;
            if(mp[i]==0){q.push(i);
            cnt++;
                        v.push_back(i);}
        }
          // cout<<cnt<<endl;
      //  vector<int>v;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int i=0;i<Grid[u].size();i++){
                mp[Grid[u][i]]--;
                if(mp[Grid[u][i]]==0){
                    cnt++;
                    q.push(Grid[u][i]);
                    v.push_back(Grid[u][i]);
                }
            }
        }
     //   cout<<cnt<<endl;
        if(cnt==numCourses)
       return v;
        else{
            v.empty();
            return v;
        } //return v.empty();
    }
};
//vector<int> findOrder
