#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005
#define inf 1<<28
/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
#define pi acos(-1);
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
int main()
{
    int n;
    while(sc1(n)&& n>0){
    dd sum=0,pr=0;

    int arr[n+5];
    for(int i=0;i<n;i++){
        sc1(arr[i]);
    }
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
            pr++;
            if(__gcd(arr[i],arr[j])==1)sum++;
        }
    }
    if(sum==0)cout<<"No estimate for this data set.\n";
    else{
    double PI  =3.141592653589793238463;
  dd s1=(pr/sum)*6.0;
    //dd s=(sum*10.0)/6.0;
    dd s=sqrt(s1);
    //dd s=sum/PI*PI;
    cout<<s<<endl;
    //printf("%.6lf\n",s);
    }
}
}

