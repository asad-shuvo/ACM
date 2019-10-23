#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a1,a2,n1,n2,d1,d2,sum1,sum2,sum;
    int test,m=0;
    scanf("%d",&test);
    while(test--){
            scanf("%lf%lf%lf",&a1,&d1,&n1);
            scanf("%lf%lf%lf",&a2,&d2,&n2);
   // cin>>a1>>d1>>n1;
    //cin>>a2>>d2>>n2;
     sum1=(n1/2)*((2*a1)+(n1-1)*d1);
      sum2=(n2/2)*((2*a2)+(n2-1)*d2);
     sum=sum1+sum2;
 //printf("Case %d: %lf\n",++m,sum1+sum2);
    cout<<"Case "<<++m<<": "<<fixed<<setprecision(0)<<sum<<endl;
   // cout<<sum<<endl;
    }
}
