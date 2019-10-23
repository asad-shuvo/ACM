#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","rt",stdin);
  // freopen("output.txt","w",stdout);
    int a,b,c,d,k1,k2,k3,k4,f,test,t=0;
    scanf("%d",&test);
    while(test--){
            t++;
            scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&k1,&k2,&k3,&k4);
//    cin>>a>>b>>c>>d>>k1>>k2>>k3>>k4;
    f=0;
    if(k2==a && k4==b && k1==c && k3==d)
        f=1;
    else if(k4==a && k3==b && k2==c && k1==d)
        f=1;
    else if(k3==a && k1==b && k4==c && k2==d)
        f=1;
    else if(k1==a && k2==b && k3==c && k4==d)
        f=1;
    if(f==1)
        printf("Case #%d: POSSIBLE\n",t);
        else
        printf("Case #%d: IMPOSSIBLE\n",t);
}
return 0;
}
