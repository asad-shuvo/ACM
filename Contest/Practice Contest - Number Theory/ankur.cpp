#include<bits/stdc++.h>
#define sz 10000009
using namespace std;
bool input[10000009];
vector<int>prime;
int c=0;
void sieve()
{
	int n=sz-5;

    for(int i=2; i<=sqrt(n); i++)
    {
        if(input[i]==0)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                input[j]=1;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(input[i]==0)
        {
            prime.push_back(i);
        }
    }
}
int main()
{
	sieve();
    //cout<<c<<endl;
    int t,x;
    scanf("%d",&t);
    for(int cas=1; cas<=t; cas++){
        scanf("%d",&x);
            long long cnt=0;
            //cout<<x/2<<endl;
        for(int i=0; i<prime.size() && prime[i]<=x/2; i++)
        {
          int  sum=x-prime[i];
            if(input[sum]==0)
               {
				   //cout<<"ii "<<prime[i]<<" "<<sum<<endl;
				   cnt++;
			   }
        }
        printf("Case %d: %lld\n",cas,cnt);
        //printf("%lld\n",cnt);
    }

    return 0;
}


