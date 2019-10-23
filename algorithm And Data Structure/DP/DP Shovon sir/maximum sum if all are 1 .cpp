#include<bits/stdc++.h>
using namespace std;
    int mat[105][105];
   int sum[105][105];
int main()
{
    int row,col;
    while(scanf("%d%d",&row,&col)&& row>0 && col>0){
    //int n=row=col;
     memset(sum,0,sizeof(sum));
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==1)mat[i][j]=-10000;
            if(mat[i][j]==0)mat[i][j]=1;
        }
    }

    for(int i=1;i<=col;i++){
        for(int j=1;j<=row;j++){
            sum[j][i]=sum[j-1][i]+mat[j][i];
        }
    }
   /* for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<sum[i][j]<< " ";
        }
        cout<<endl;
    }
*/
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
/*
1 0 0 1 0 0 1
1 1 1 1 1 0 1
0 1 1 1 1 1 0
1 0 1 1 1 1 0
0 0 1 1 1 0 1
0 0 1 0 0 1 1
*/
