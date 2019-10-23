#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,l,a[100005],b[100005],p,k,sum;
    while(scanf("%d%d",&n,&m)!=EOF){
            p=0;
    k=0;
    sum=0;
    while(n>0 && m>0){
        a[k++]=n%10;
        n=n/10;
        b[p++]=m%10;
        m=m/10;
    }
    for(i=0,j=0;i<k,j<p;i++,j++){
        if(a[i]!=b[j])
            sum++;
    }
    printf("%d\n",sum);
    }
    return 0;
}
