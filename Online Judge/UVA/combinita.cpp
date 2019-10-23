#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    char str[105],s[105];
    int i,j,k,l,m,sum,n,p,test,a=0;
    scanf("%d",&test);
    while(test--){
            sum=0;
    scanf("%d",&n);
    scanf("%s",str);
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        k=str[i]-'0';
        l=s[i]-'0';
        if((k-l)<=5 && (k>l))
        {
            sum+=(k-l);
        }
        else if((l-k)<=5 && (l>k)){
        sum+=l-k;
        }
        else if((l>k) && (l-k)>5)
        {
            sum+=(9-l)+(k+1);
        }
        else if((k>l) && (k-l)>5)
        {
            sum+=(l+1)+(9-k);
        }

        }
        a++;
    printf("Case %d: %d\n",a,sum);
    }
    return 0;
}
