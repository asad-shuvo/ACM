#include<bits/stdc++.h>
using namespace std;
int main()
{
    int gl,gr,bl,br,p,t,f1,f2;
    scanf("%d%d%d%d",&gl,&gr,&bl,&br);
   if(gl==br || gr==bl)
    printf("YES\n");
   else if(br-2*gl<=2 && gl-br<=1)
    printf("YES\n");
   else if(bl-2*gr<=2 && gr-bl<=1)
    printf("YES\n");
   else
    printf("NO\n");
}
