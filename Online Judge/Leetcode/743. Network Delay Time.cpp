#define inf 1<<28
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        int mat[N+3][N+3];
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                if(i==j)mat[i][j]=0;
                else mat[i][j]=inf;
            }
        }
        for(int i=0;i<times.size();i++){
            mat[times[i][0]][times[i][1]]=times[i][2];
        }
        for(int k=1;k<=N;k++){
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
        }
        int m=-1,f=0;
        for(int i=1;i<=N;i++){
            m=max(m,mat[K][i]);
        }
        // cout<<m<<endl;
        if(m==inf)return -1;
        else return m;
    }
};
