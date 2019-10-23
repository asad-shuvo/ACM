#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100005

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
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
int main()
{
    string a;
    cin>>a;
    int pls=-1;
    int M=a[a.size()-1]-'0';
    for(int i=0;i<a.size();i++){
        int D=a[i]-'0';
        if(D%2==0){
                if(D<M){
                pls=i;
                break;
                }
                else if(D>M)
                    pls=i;
            }
    }
    if(pls!=-1){
    swap(a[pls],a[a.size()-1]);
    cout<<a<<endl;
    }
    else
        cout<<-1<<endl;

}


