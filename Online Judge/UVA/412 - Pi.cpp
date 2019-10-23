#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)&& n>0){
    double sum=0,pr=0;

    int arr[n+5];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
            pr++;
            if(__gcd(arr[i],arr[j])==1)sum++;
        }
    }
    if(sum==0)printf("No estimate for this data set.\n");
    else{
    //double PI  =3.141592653589793238463;
  double s1=(pr/sum)*6.0;
    //dd s=(sum*10.0)/6.0;
    double s=sqrt(s1);
    //dd s=sum/PI*PI;
    //cout<<s<<endl;
    printf("%.6lf\n",s);
    }
}
}

