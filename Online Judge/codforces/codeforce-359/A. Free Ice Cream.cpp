#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    long long int x,i,j,k,l,m,n,sum,p;
    char c;
    scanf("%lld%lld",&n,&x);
            sum=0;
    p=0;
    sum+=x;
    for(i=1;i<=n;i++){
            getchar();
        c=getchar();
        cin>>m;
        //getchar();
        if(c=='+')
        {
            sum+=m;
        }
        else if(c=='-'){
            if(sum>=m){
                sum=sum-m;
               // p++;
            }
    else
        p++;
        }
    }
    cout<<sum<<" "<<p<<endl;
    return 0;

}
