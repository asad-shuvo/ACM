class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int arr[N+5];
        int into[N+5];
        memset(arr,0,sizeof(arr));
        memset(into,0,sizeof(into));
        for(int i=0;i<trust.size();i++){
            arr[trust[i][0]]++;
            into[trust[i][1]]++;
        }
        int f=-1;
        for(int i=1;i<=N;i++){
            if(arr[i]==0){
                if(into[i]==N-1)f=i;
            }
        }
        return f;
    }
};
