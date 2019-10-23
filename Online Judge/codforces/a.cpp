#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,p,k,  c,t;
    scanf("%d%d",&p,&k);

    for( i=1; ; i++)
    {
        t = p;
        t *= i;
        t = t%10;
        if(t==k || t == 0)
        {
            break;
        }
    }
    if(i==0){i = 1;}
    printf("%d\n",i);
}
