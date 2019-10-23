#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l;
    while(scanf("%d",&n)&& n>0){

            int sum=1;
            for(i=1; ;i++){
                sum*=2;
                if(sum>n)
                    break;
            }
double d=pow(2,i-1);
//cout<<d<<endl;
k=n-d;
if(k==0)
    k=n/2;
    if(n!=1)
cout<<k*2<<endl;
else
    cout<<"1"<<endl;
   // double p=sqrt(n);
    //cout<<p<<endl;
//printf("%d\n",i);
    }

}

