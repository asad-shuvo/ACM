#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b1,b2,b3,g1,g2,g3,c1,c2,c3,sum,i,j,k,arr[100],p;
    while(scanf("%d%d%d%d%d%d%d%d%d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)!=EOF){
            k=0;
   /** arr[k++]=b2+b3+g1+g3+c1+c2;
    arr[k++]=b2+b3+c1+c3+g1+g2;
    arr[k++]=c2+c3+g1+g3+b1+b2;
    arr[k++]=c2+c3+b1+b3+g1+g2;
    arr[k++]=g2+g3+b1+b3+c1+c2;
    arr[k++]=g2+g3+c1+c3+b1+b2;
    *////
    arr[k++]=b2+b3+c1+c3+g1+g2;
    arr[k++]=c2+c3+b1+b3+g1+g2;
    arr[k++]=b2+b3+g1+g3+c1+c2;
    arr[k++]=c2+c3+g1+g3+b1+b2;
    arr[k++]=g2+g3+b1+b3+c1+c2;
    arr[k++]=g2+g3+c1+c3+b1+b2;
     int mn=arr[0];
    for(i=0;i<k;i++){
        if(arr[i]<mn)
            mn=arr[i];
    }
    for(i=0;i<k;i++){
        if(mn==arr[i]){
            p=i+1;
        break;
        }
    }
    if(p==1)
        printf("BCG %d\n",mn);
    else if(p==2)
        printf("CBG %d\n",mn);
        else if(p==3)
        printf("BGC %d\n",mn);
        else if(p==4 )
        printf("CGB %d\n",mn);
        else if(p==5 )
        printf("GBC %d\n",mn);
        else if(p==6 )
        printf("GCB %d\n",mn);
}
return 0;
}
