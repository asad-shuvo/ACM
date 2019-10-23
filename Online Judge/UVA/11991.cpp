#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    long long int k,i,j,n,m,a,f,b,c,arr[100005],ar[100005];
    while(scanf("%lld%lld",&n,&m)!=EOF){
            k=0;
    for(i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }

    for(i=0;i<m;i++){
        scanf("%lld%lld",&a,&b);
        c=0;
        f=0;
        for(j=0;j<n;j++){
            if(b==arr[j]){
               c++;

               if(a==c){
                ar[k++]=j+1;
               f=1;
               }
            }
            if(f==1)
                break;
        }
            if(c<a)
                ar[k++]=0;
    }
    for(i=0;i<k;i++){
        printf("%lld\n",ar[i]);
    }
    }
    return 0;
}
