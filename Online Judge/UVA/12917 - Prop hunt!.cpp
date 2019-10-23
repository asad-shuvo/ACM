#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,h,o;
    while(scanf("%d%d%d",&p,&h,&o)!=EOF){
    if(p>h)
    {
        printf("Props win!\n");
    }
    else if(p==h)
    {
        if(o>=(p*2))
        {
            printf("Props win!\n");
        }
        else
            printf("Hunters win!\n");
    }
    else if(h>p)
    {
        if(o>=((h-p)+(p*2))){
            printf("Props win!\n");
        }
        else{
            printf("Hunters win!\n");
        }
    }
}
return 0;
}
