#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,p,z,m,n,cnt,arr[1000],a[1000],w[1000],l[1000],cn[1000],c1[1000],maxx,mx,f;
    while(scanf("%d",&n)!=EOF){
            f=0;
            k=0;
    p=0;
    z=0;
    m=((n*(n-1))/2)-1;
   int coun[100]={0};
   int win[100]={0};
   for(i=0;i<m;i++){
    scanf("%d%d",&w[i],&l[i]);
    coun[w[i]]++;
    coun[l[i]]++;
    win[w[i]]++;
   }
   mx=0;
   for(i=1;i<=n;i++){
    if(coun[i]<(n-1)){
        cn[k++]=i;
        if(win[i]>mx){
            mx=win[i];
       maxx=i;
    }
   }
   }
   if(maxx==cn[0])
    printf("%d %d\n",cn[0],cn[1]);
    else
        printf("%d %d\n",cn[1],cn[0]);
    }
}
