#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
#define mx 1000
int main()
{
    int n,m,row,col,rowmax=-1,rowmin=1000000,colmax=-1,colmin=1000000;
    int cnt=0;
    sc("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
            string a;
            cin>>a;
            for(int j=0;j<a.size();j++){
            if(a[j]=='B'){
                cnt++;
                rowmax=max(rowmax,i);
                colmax=max(colmax,j+1);
                rowmin=min(rowmin,i);
                colmin=min(colmin,j+1);
            }
        }
    }
     row=(rowmax-rowmin)+1;
     col=(colmax-colmin)+1;
     int D=max(row,col);
     if(D>n || D>m) pr("-1\n");
     else if(cnt==0)pr("1\n");
     else{
        D=D*D;
        pr("%d\n",D-cnt);
     }
    //cout<<rowmax<<" "<<colmax<< " "<<rowmin<<" "<<colmin<<endl;
}

