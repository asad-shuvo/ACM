#include <bits/stdc++.h>
using namespace std;
int main()
{
    int g,c,sum=0,mn,mx;
    while(scanf("%d%d",&g,&c)!=EOF){
            if(g==0 && c==0)
            printf("0 0\n");
            else if(g==0)
            printf("Impossible\n");
            else if(c==0)
                printf("%d %d\n",g,g);
    else{
   // sum=sum+g;
    if(c<=g){
        mn=g;
        mx=g+(c-1);
    }
    if(c>g){
        mn=g+(c-g);
        mx=g+(c-1);
    }
    printf("%d %d\n",mn,mx);
    }
    }
    return 0;
}
