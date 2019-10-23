#include<stdio.h>
#define max 25
#define MAX(a,b) a<b?b:a

int main(){
 //freopen("a.in","r",stdin);
 int c[max][max]={0};/*table*/
 int X[max];
 int Y[max];
 int n,m,i,j,a;

 scanf("%d\n",&n);
    for(i=1;i<=n;i++){
     scanf("%d",&m);
        X[m]=i;
 }
 while(1){
     a= scanf("%d",&m);
     if (a!=1) break;
     Y[m] = 1;
  for(i=2;i<=n;i++){
     scanf("%d",&m);
     Y[m]=i;
  }
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(X[i]==Y[j])
      c[i][j] = c[i-1][j-1]+1;
      else
     c[i][j]= MAX(c[i][j-1],c[i-1][j]);
    }
     }
  printf("%d\n",c[n][n]);
 }
 return 0;
}
