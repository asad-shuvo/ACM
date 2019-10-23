#include<stdio.h>
int main()
{
    int w;
    while(scanf("%d", &w)==1)
    {
        if(w==2) printf("NO\n");
        else if(w%2==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

