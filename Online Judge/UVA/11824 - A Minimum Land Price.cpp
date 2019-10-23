#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","rt",stdin);
    //freopen("output.txt","w",stdout);

    long long int arr[10000],i,j,k,l,m,n,test,t,p;
    scanf("%lld",&test);
    while(test--){
        k=0;
            double sum=0;
    while(scanf("%lld",&n)){
        if(n!=0){
            arr[k++]=n;
        }
        else
        {
            sort(arr,arr+k);
             p=1;
            for(i=k-1;i>=0;i--){
                sum=sum+2*pow(arr[i],p);
                p++;
            }
    if(sum>5000000)
        printf("Too expensive\n");
    else
            printf("%.0lf\n",sum);
            break;
        }
    }
    }
    return 0;
}
