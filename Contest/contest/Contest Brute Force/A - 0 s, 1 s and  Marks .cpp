#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005

/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
int main()
{
    int test,te=0;
    sc("%d",&test);
    while(test--){
    int arr1[mx]={0},arr0[mx]={0};
    string A;
    cin>>A;
    int cnt0=0;
    int cnt1=0;
    int sz=A.size();
    for(int i=0;i<A.size();i++){
     if(A[i]=='0'){
        cnt0++;
        arr0[i]=cnt0;
        cnt1=0;
     }
     if(A[i]=='1'){
        cnt1++;
        arr1[i]=cnt1;
        cnt0=0;
     }
    }
  //  for(int i=0;i<sz;i++)cout<<arr0[i]<<" "<<endl;
    for(int i=0;i<sz;i++){
           // if(i==sz-1 && arr[i]>)
        if(arr0[i]>0){
            if(i==sz-1 && arr0[i]>0){
                      int M=arr0[i];
                for(int z=i;;z--){
                    if(arr0[z]==0 || z<0)break;
                  arr0[z]=M;
                }
            }
                int I=i;
            for(int j=i+1;j<sz;j++){
                if(arr0[j]==0){
                    int J=j-1;
                        int M=arr0[j-1];
     //                   cout<<M<<endl;
                    for(int k=J;k>=I;k--){
                        arr0[k]=M;
                       // cout<<arr0[k]<<endl;
                    }
                    i=j-1;
                    break;
                }

            }
        }
        if(arr1[i]>0){
            if(i==sz-1 && arr1[i]>0){
                      int M=arr1[i];
                for(int z=i;;z--){
                    if(arr1[z]==0 || z<0)break;
                  arr1[z]=M;
                }
            }
                int I=i;
            for(int j=i+1;j<sz;j++){
                if(arr1[j]==0){
                    int J=j-1;
                        int M=arr1[j-1];
                        //cout<<M<<endl;
                    for(int k=J;k>=I;k--){
                        arr1[k]=M;
                       // cout<<arr0[k]<<endl;
                    }
                    i=j-1;
                    break;
                }

            }
        }
    }
    for(int i=0;i<sz;i++)
    {
        if(A[i]=='?')
        {
            if(i==0){
                if(arr0[i+1]<arr1[i+1]){arr0[i]+=1;A[i]='0';arr0[i+1]+=1;}
                else if(arr0[i+1]>arr1[i+1]){
                    arr1[i]+=(arr1[i+1]+1);A[i]='1';arr1[i+1]+=1;}
                    else {A[i]='0';arr0[i]+=(arr0[i+1]+1);}
            }
            else if(A[i+1]=='?'){
                if(A[i-1]=='1'){A[i]=='0';arr0[i]+=(arr0[i-1])+1;}
                else{A[i]=='1';arr1[i]+=(arr1[i-1]+1);}
            }
            else{
                    int oneM=max(arr1[i+1],arr1[i-1]);
                    int zeroM=max(arr0[i+1],arr0[i-1]);
                    if(zeroM<oneM){
                            if(arr0[i+1]>0)arr0[i+1]+=1;
                        arr0[i]+=(zeroM+1);
                    }
                    else{
                            if(arr1[i+1]>0)arr1[i+1]+=1;
                        arr1[i]+=(oneM+1);
                    }
           // int zeroM
             //   if(arr0[i-1]<arr1[i-1] && arr0[i+1]<arr1[i+1]){

                }
            }
        }
            int M0=-1;
            int M1=-1;
            for(int i=0;i<sz;i++){
                    M0=max(arr0[i],M0);
                    M1=max(arr1[i],M1);
            }
            pr("Case %d: %d\n",++te,max(M0,M1));
    }

    }
