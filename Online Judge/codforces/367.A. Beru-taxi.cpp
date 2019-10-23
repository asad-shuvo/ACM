#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,a,b,c,d;
    double arr[10000],m;
    k=0;
    scanf("%d%d",&a,&b);
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d%d",&c,&d,&j);
        m=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        arr[k++]=m/j;
    }
    sort(arr,arr+n);
    printf("%.21lf\n",arr[0]);
}
