class Solution {
public:
    int fun(int cap,vector<int>w){
        int cnt=0;
        int i=0;
        while(1){
            cnt++;
            int sum=0;
            while(sum<=cap){
                
                sum+=w[i];
                if(sum>cap)break;
                else i++;
                
                if(i==w.size())break;
            }
            // if(cap==3)
            // cout<<sum<<endl;
            if(i==w.size())break;
        }
     //   cout<<"cnt"<<cnt<<endl;
        return cnt;
    }
    int shipWithinDays(vector<int>& weights, int D) {
        int m=-1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            m=max(m,weights[i]);
            sum+=weights[i];
        }
        int b=m,e=sum;
        int mn=INT_MAX;
        while(b<=e){
            int mid=(b+(e-b)/2);
          //  cout<<"mid "<<mid<<endl;
            int ret=fun(mid,weights);
            if(ret>D){
                b=mid+1;
            }
            else if(ret==D){
                mn=min(mn,mid);
                e=mid-1;
            }
            else{
                 mn=min(mn,mid);
                e=mid-1;
            }
        }
        return mn;
    }
};
