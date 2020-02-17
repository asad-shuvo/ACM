class Solution {
public:
    
    int countPrimes(int n) {
       int status[n+1];
        for(int i=2;i<n;i++)status[i]=0;
        for(int i=2;i*i<n;i++){
            if(status[i]==0){
                for(int j=i*i;j<n;j+=i){
                    //cout<<j<<endl;
                    status[j]=1;
                }
            }
        }
        int cnt=0;
        for(int i=2;i<n;i++){
            if(status[i]==0)cnt++;
        }
        return cnt;
    }
};
