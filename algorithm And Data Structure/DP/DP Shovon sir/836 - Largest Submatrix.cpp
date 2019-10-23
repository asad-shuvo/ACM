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
#define mx1 26
int mat[mx1][mx1];
int sum[mx1][mx1];
int main()
{
//FILE
    string str;
    int test,n,te=0;
    sc("%d",&test);
    getchar();
    getchar();
    while(test--){
    int row=0;
    int col;
    te++;
    if(te>1) cout<<endl;
    memset(sum,0,sizeof(sum));
    //getchar();
    while(getline(cin,str) && str!="")
    {
      row++;
      col=str.size();
      for(int j=0;j<col;j++){
        mat[row][j+1]=str[j]-'0';
        if(mat[row][j+1]==0) mat[row][j+1]=-100000;
      }
    }
    /*
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }*/
     for(int i=1;i<=col;i++){
        for(int j=1;j<=row;j++){
            sum[j][i]=sum[j-1][i]+mat[j][i];
        }
    }
    int mx=INT_MIN,S;

    for(int i=1;i<=row;i++){
        for(int j=i;j<=row;j++){
             S=0;
            for(int x=1;x<=col;x++){
  //                  cout<<sum[j][x]<<" "<<sum[i-1][x]<<endl;
                S+=(sum[j][x]-sum[i-1][x]);
    //            cout<<S<<endl;
                if(S<0){
                    S=0;
                }
                mx=max(mx,S);
            }
        }
    }
    cout<<mx<<endl;
}
}
