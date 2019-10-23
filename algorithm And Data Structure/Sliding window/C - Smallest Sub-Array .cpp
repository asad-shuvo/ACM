#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005

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
    int arr[1000005];
int main()
{
    FILE
    int test,te=0;
    sc1(test);
    while(test--){
    int n,m,k;
    sc3(n,m,k);
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    for(int i=3;i<n;i++){
        arr[i]=(arr[i-1]+arr[i-2]+arr[i-3])%m+1;
    }
    map<int,int>mp;
    int i,s=0,e=0,sum=0,msum=INT_MAX,cnt=0;
    for( i=0;i<n;i++)
        {
            if(arr[e]<=k){
                if(mp[arr[e]]==0){
                    sum++;
                    mp[arr[e]]=1;
                    e++;
                }
                else if(mp[arr[e]]>=1){
                    mp[arr[e]]++;
                    e++;
                }
            }
                                else
                    e++;
            if(sum==k){
                msum=e-1;
                break;
            }
                //break;
        }
        while(e<n){
            while(e<n){
                if(arr[e]<=k){
                    if(mp[arr[e]]==0){
                        sum++;
                        mp[arr[e]]=1;
                        e++;
                    }
                    else if(mp[arr[e]]>=1){
                        mp[arr[e]]++;
                        e++;
                    }
                }
                else e++;
                if(sum==k){
                    msum=min(msum,(e-s-1));
                    break;
                }
            }
                        while(sum==k){
                    if(arr[s]>k)s++;
            else if(arr[s]<=k){
           if(mp[arr[s]]==0){
            s++;
           }
           else if(mp[arr[s]]==1){
            mp[arr[s]]==0;sum--;
            s++;
           }
           else if(mp[arr[s]]>1){
            mp[arr[s]]--;
            s++;
                        if(sum==k){msum=min(msum,(e-s-1));}
           }
            }
            }

        }

       // msum=e-1;
       if(msum==INT_MAX)
        pr("Case %d: sequence nai\n",++te);
       else
       pr("Case %d: %d\n",++te,msum);
}
}

