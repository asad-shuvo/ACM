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
    string A;
    cin>>A;
    int cnt0=0,cnt1=0,arr1[mx]={0},arr0[mx]={0};
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
    int M1=-1;
    int M0=-1;
    for(int i=A.size()-1;i>=0;i--){
            M1=max(M1,arr1[i]);
            M0=max(M0,arr0[i]);
        if(A[i]=='0'){
        //cnt0=M1;
        arr0[i]=M0;
        M1=0;
     }
     if(A[i]=='1'){
        //cnt1++;
        arr1[i]=M1;
        M0=0;
     }
    }
    /*
    for(int i=0;i<A.size();i++)
        cout<<arr1[i]<<" ";
        cout<<endl;
        for(int i=0;i<A.size();i++)
        cout<<arr0[i]<<" ";*/
        for(int i=0;i<A.size();i++){
            if(A[i]=='?'){
                if(i==0){
                    if(A[i+1]=='1'){
                        A[i]='0';
                        arr0[i]+=1;
                    }
                    else if(A[i+1]=='0'){
                        A[i]='1';
                        arr1[i]+=1;
                    }

                }
                if(i==A.size()-1){
                    if(A[i-1]=='1'){
                        A[i]=='0';
                        arr0[i]+=1;
                    }if(A[i-1]=='0'){
                        A[i]=='1';
                        arr1[i]+=1;
                    }
                }
                int mm=-1;
                if(A[i-1]=='1' && A[i+1]=='?'){
                    A[i]='0';
                    arr0[i]+=1;
                }
                if(A[i-1]=='0' && A[i+1]=='?'){
                    A[i]='1';
                    arr1[i]+=1;
                }
                if(A[i-1]=='1' && A[i+1]=='1'){
                    A[i]='0';
                    arr0[i]+=1;
                }
                if(A[i-1]=='0' && A[i+1]=='0'){
                    A[i]='1';
                    arr1[i]+=1;
                }
                if(A[i-1]=='0' && A[i+1]=='1'){
                        if(arr0[i-1]<arr1[i+1]){
                            A[i]='0';
                            arr0[i]+=arr[i-1];
                            arr0[i-1]+=1;
                        }
                        else{
                            A[i]='1';
                            arr1[i]+=arr[i+1];
                            arr1[i+1]+=1;
                        }
                }
                if(A[i-1]=='1' && A[i+1]=='0'){
                        if(arr0[i+1]<arr1[i-1]){
                            A[i]='0';

                            arr0[i]+=arr0[i+1];
                            arr0[i+1]+=1;
                        }
                        else{
                            A[i]='1';
                            arr1[i]+=arr1[i-1];
                            arr1[i-1]+=1;
                        }
                }

            }
        }

    for(int i=0;i<A.size();i++)
        cout<<arr1[i]<<" ";
        cout<<endl;
        for(int i=0;i<A.size();i++)
        cout<<arr0[i]<<" ";
}
