#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {

        if(i==1)
            printf("I hate it");
        else if(i==n)
        {
            if(i%2==0)printf(" I love it");
            else printf(" I hate it");
        }
        else
        {
            if(i%2==0)printf(" that I love");
            else printf(" that hate it");
        }
        //  printf(" I that I love that I hate it\n");
    }
    printf("\n");
}
