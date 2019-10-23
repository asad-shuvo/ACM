#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,s1,s2,n,i,j,k;
    scanf("%d",&n);
    s1=0;
    s2=0;
    for(i=1;i<=n;i++){
        scanf("%d%d",&a,&b);
        if(a>b)
            s1++;
        else if(b>a)
        s2++;

    }
    if(s1>s2)
        printf("Mishka\n");
        else if(s2>s1)
        printf("Chris\n");
        if(s1==s2)
        printf("Friendship is magic!^^\n");
}
