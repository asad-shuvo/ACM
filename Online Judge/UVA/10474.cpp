#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,k=0,l,arr[10000],a[10000],sum,f,pos,test;
    while(scanf("%d%d",&m,&n)!=EOF){
            if(m==0 && n==0)
            break;
    for(i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    k++;
    printf("CASE# %d:\n",k);
    for(i=0;i<n;i++){
            f=0;
        for(j=0;j<m;j++){
        if(a[i]==arr[j])
            {
               f=1;
               pos=j+1;
               break;
            }

            }
            if(f==1)
                printf("%d found at %d\n",a[i],pos);
            else
                printf("%d not found\n",a[i]);

        }
    }
    return 0;
}

