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
        int M,N;
    while(sc("%d%d",&M,&N) && M>0 && N>0){

    int starr[mx]={0};
    int arr[mx],arr1[mx];
    int member[mx],mt[mx],table[mx],kt[mx];
    for(int i=1;i<=M;i++){sc("%d",&member[i]);
    mt[i]=i;
    }
    for(int i=1;i<=N;i++){sc("%d",&table[i]);
    kt[i]=i;
   // if(mp[table[i]]==0)
    }
    for(int i=1;i<=N;i++){
        for(int j=i+1;j<=N;j++){
            if(table[i]<table[j])
            {
                swap(table[i],table[j]);
                swap(kt[i],kt[j]);
            }
        }
    }
    for(int i=1;i<=M;i++){
        for(int j=i+1;j<=M;j++){
            if(member[i]<member[j])
            {
                swap(member[i],member[j]);
                swap(mt[i],mt[j]);
            }
        }
    }
  //  for(int i=1;i<=M;i++)cout<<member[i]<<" "<<mt[i]<<endl;

    //cout<<endl;
    int f=1;
    vector<int>G[mx];
    for(int i=0;i<=mx;i++)G[i].clear();
    for(int i=1;i<=M;i++){
        int A=member[i];
        for(int j=1;j<=N;j++){
            if(table[j]>0 && A>0){
                table[j]=table[j]-1;
                //cout<<mt[i]<<" "<<kt[j]<<endl;
                G[mt[i]].p_b(kt[j]);
                A=A-1;
            }
           // if(A>0)f=1;
        }
        if(A>0)f=0;
    }
    cout<<f<<endl;
    if(f==1){
    for(int i=1;i<=M;i++){
        for(int j=0;j<G[i].size();j++){
            cout<<G[i][j]<<" ";
        }
                    cout<<endl;

    }

    }
  //  for(int i=1;i<=N;i++)
    //    cout<<table[i]<<" "<<kt[i]<<endl;
}

}
