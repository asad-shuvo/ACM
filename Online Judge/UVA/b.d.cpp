#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
     char name[100][200];
    int t,p,i,j,k=0,l=0,n=0,d[100],m[100],y[100],day[100],month[100],year[100],m1[100],d1[100];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s%d%d%d",name[i],&day[i],&month[i],&year[i]);
    }
    int p1;
    int s=0,g=0,h=0;
    int y11[100];
    int m11[100],d11[100];
    int x1=0,z1=0,m12[100],d12[100];
    int mn=year[0];
    for(i=0;i<t;i++){
        if(year[i]>mn)
        {
            mn=year[i];
        }
    }
    for(i=0;i<t;i++){
        if(mn==year[i]){
            y11[s++]=year[i];
            m11[g++]=month[i];
            d11[h++]=day[i];
        }
    }
   int minn=m11[0];
    for(i=0;i<g;i++){
        if(m11[i]>minn)
        {
            minn=m11[i];
        }
    }
    for(i=0;i<g;i++){
        if(minn==m11[i]){
            m12[x1++]=m11[i];
            d12[z1++]=d11[i];
        }
    }
    int minnn=d12[0];
    for(i=0;i<z1;i++){
        if(d12[i]>minnn){
            minnn=d12[i];
        }
    }
    for(i=0;i<t;i++){
        if(mn==year[i] && minn==month[i] && minnn==day[i]){
            p1=i;
        }
    }
    printf("%s\n",name[p1]);
      int mx=year[0];
    for(i=0;i<t;i++){
        if(year[i]<mx)
        {
            mx=year[i];
        }
    }
    for(i=0;i<t;i++){
        if(mx==year[i]){
            y[k++]=year[i];
            m[n++]=month[i];
            d[l++]=day[i];
        }
    }
   int maxx=m[0];
    for(i=0;i<n;i++){
        if(m[i]<maxx)
        {
            maxx=m[i];
        }
    }
    int x=0;
    int z=0;
    for(i=0;i<n;i++){
        if(maxx==m[i]){
            m1[x++]=m[i];
            d1[z++]=d[i];
        }
    }
    int maxxx=d[0];
    for(i=0;i<z;i++){
        if(d1[i]<maxxx){
            maxxx=d1[i];
        }
    }
    for(i=0;i<t;i++){
        if(mx==year[i] && maxx==month[i] && maxxx==day[i]){
            p=i;
        }
    }
    printf("%s\n",name[p]);
}



