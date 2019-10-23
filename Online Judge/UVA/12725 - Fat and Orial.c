#include <stdio.h>
int main()
{
   // freopen("input.txt","rt",stdin);
    int D1,D2,test,i=1;
    double G,G1,G2;
    scanf("%d",&test);
    while(test--){
    scanf("%lf%lf%d%d",&G1,&G2,&D1,&D2);
    G=(G2*(D1+D2)-(D1*G1))/D2;
    if(G>10.00 || G<0.0)
    {
        printf("Case #%d: Impossible\n",i);

    }
    else{
         printf("Case #%d: %.2lf\n",i,G);
    }
    i++;
    }
    return 0;
}
