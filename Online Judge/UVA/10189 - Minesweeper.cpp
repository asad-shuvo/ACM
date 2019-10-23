#include <bits/stdc++.h>
using namespace std;
#define p 200
int m,n;
char grid[p][p];
int main()
{
    freopen("input.txt","rt",stdin);
   // freopen("output.txt","w",stdout);
    int i;
    char c;
    int j,sum,t=0;
    while(scanf("%d%d",&m,&n)!=EOF && m>0 && n>0)
    {
        t++;
        if(t>1)
            cout<<endl;

   // sum=0;
    //cin>>m>>n;
    getchar();
    for(i=0;i<m;i++){

            gets(grid[i]);
        }
        printf("Field #%d:\n",t);
    for(i=0;i<m;i++){

        for(j=0;j<n;j++){
                sum=0;
                 if(grid[i][j]=='*')
            cout<<"*";
            else if(grid[i][j]=='.'){
                    if(i>m || j>n || i<0 || j<0)
                    break;

            if(grid[i-1][j-1]=='*')
            sum++;
           if(grid[i-1][j]=='*')
            sum++;
             if(grid[i-1][j+1]=='*')
            sum++;
              if(grid[i][j-1]=='*')
            sum++;
              if(grid[i][j+1]=='*')
            sum++;
              if(grid[i+1][j-1]=='*')
            sum++;
              if(grid[i+1][j]=='*')
            sum++;
              if(grid[i+1][j+1]=='*')
            sum++;

        }
        if(grid[i][j]!='*')
         cout<<sum;
   // cout<<sum;
    }
    cout<<endl;
    }
}
}

