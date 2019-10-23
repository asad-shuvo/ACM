#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    int n,m,j=0,arr[100],a[100],l,sum,f,i,test;
    scanf("%d",&test);
    while(test--){
            j++;
            sum=0;
    f=0;
    scanf("%d%d",&n,&l);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(sum>l)
        printf("Case %d: No\n",j);
    else
    {
        for(i=0;i<n;i++){
            if(a[i]<arr[i]){
                f=1;
                break;
            }
        }
        if(f==1)
             printf("Case %d: No\n",j);
        else
            printf("Case %d: Yes\n",j);
    }
    }
    return 0;

}
