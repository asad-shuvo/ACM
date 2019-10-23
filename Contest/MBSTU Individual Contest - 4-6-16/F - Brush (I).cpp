#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,arr[100000],sum,test,j=0;
    scanf("%d",&test);
    while(test--){
            j++;
        scanf("%d",&n);
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);

                if(arr[i]<0)
                    sum=sum+0;
            else
            sum+=arr[i];
        }
        printf("Case %d: %d\n",j,sum);
    }
    return 0;
}
