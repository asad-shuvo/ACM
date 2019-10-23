#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a[100];
    int test;
    scanf("%d",&test);
    int t=0,te=0,i,j,k,m,n,f,f1,time,p;
    while(test--){
           // cout<<endl;
    f=0,f1=0,time=0;
    for(i=0;i<5;i++){
        getline(cin,a[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i][j]=='>'){
                    time++;
               p=4-j;
              if(p==4){
                f=1;
              }
              else if(p==3){
                if(a[i][j+1]=='|' || a[i][j+2]=='|' || a[i][j+3]=='|')
                    f=1;

              }
              else if(p==2){
                if(a[i][j+1]=='|' || a[i][j+2]=='|')
                    f=1;
              }
              else if(p==1){
                if(a[i][j+1]=='|')
                f=1;
              }
              else if(p==0)
                f=0;
                }
             if(a[i][j]=='<'){
               p=4-j;
              if(p==4){
                f1=1;
              }
              else if(p==3){
                if(a[i][j+1]=='|' || a[i][j+2]=='|' || a[i][j+3]=='|')
                    f1=1;

              }
              else if(p==2){
                if(a[i][j+1]=='|' || a[i][j+2]=='|')
                    f1=1;
              }
              else if(p==1){
                if(a[i][j+1]=='|')
                f1=1;
              }
              else if(p==0)
                f1=0;
                }

            }
        }
        if(time==1){
    if(f==1)
        printf("Case %d: Thik Ball\n",++t);
    else
    printf("Case %d: No Ball\n",++t);
        }
        else if(time==0){
            if(f1==0)
                 printf("Case %d: Thik Ball\n",++t);
            else
                printf("Case %d: No Ball\n",++t);
        }

}
return 0;
}
