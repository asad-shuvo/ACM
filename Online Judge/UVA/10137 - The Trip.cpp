#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int i,j,k;
    double arr[100000],sum=0;
    scanf("%lf",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&arr[i]);
        sum+=arr[i];
    }
    double avg=sum/n;
    printf("%lf\n",avg);
    double s=0;
    for(i=0;i<n;i++){
        if(arr[i]<avg){
            s+=(avg-arr[i]);
        }
    }
    double ans=avg-3.01;
    printf("%.2lf",s);
}
