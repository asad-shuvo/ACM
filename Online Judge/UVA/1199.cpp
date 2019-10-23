#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,l,arr[100005],ar[100005],a,b,c,f,p;
    while(scanf("%d%d",&n,&m)!=EOF){
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    p=0;
    for(i=0;i<m;i++){

        scanf("%d%d",&a,&b);
        c=0;
        f=0;
        for(j=0;j<n;j++){
            if(arr[j]==b){
                c++;
                if(c==a)
                {
                    ar[p++]=j+1;
                    f=1;
                    break;
                }
            }
        }
        if (f==0)
                    ar[p++]=0;
    }
    for(i=0;i<p;i++){
        printf("%d\n",ar[i]);
    }
    }
    return 0;
}
