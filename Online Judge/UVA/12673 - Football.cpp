#include <bits/stdc++.h>
using namespace std;
int main()
{
      // freopen("input.txt","rt",stdin);

    int i,j,n,g,m,p,q,arr[100005],arr1[100005],arr2[100005];
    int a1[100005],a2[100005],a3[100005];
    while(scanf("%d%d",&n,&g)!=EOF){
    int pnt=0;
    int k1=0,k2=0,k3=0;
    for(i=0;i<n;i++){
        scanf("%d%d",&arr1[i],&arr2[i]);
        if(arr1[i]>arr2[i]){
            pnt+=3;
        }

        else if(arr1[i]<=arr2[i]){
            a1[k1++]=(arr2[i]-arr1[i]);
            a2[k2++]=(arr1[i]);
            a3[k3++]=(arr2[i]);
        }
    }
    /*
    for(i=0;i<k1-1;i++){
        for(j=i+1;j<k1;j++){
            if(a1[i]>a1[j]){
                swap(a1[i],a1[j]);
                swap(a2[i],a2[j]);
                swap(a3[i],a3[j]);

            }
        }
    }
    */
    sort(a1,a1+k1);
    for(i=0;i<k1;i++){
        if(g==0){

            if(a1[i]==0)
                pnt+=1;
        }
       else  if(g>a1[i]){
            g=g-(a1[i]+1);
            pnt+=3;
        }

            else if( g!=0 && g==a1[i]){
                pnt+=1;
                g=g-a1[i];
               // break;
            }

    }
    cout<<pnt<<endl;
    }
    return 0;
}
