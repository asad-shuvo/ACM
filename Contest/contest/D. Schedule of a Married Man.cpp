#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Fh1,Fh2,Sh1,Sh2,Fm1,Fm2,Sm1,Sm2,test,t=0;
    cin>>test;
    while(test--){
    scanf("%d:%d %d:%d",&Fh1,&Fm1,&Fh2,&Fm2);
    scanf("%d:%d %d:%d",&Sh1,&Sm1,&Sh2,&Sm2);
    if(Sh2<Fh1){
        printf("Case %d: Hits Meeting\n",++t);
    }
    else if(Sh2==Fh1){
        if(Sm2<Fm1)
            printf("Case %d: Hits Meeting\n",++t);
        else
            printf("Case %d: Mrs Meeting\n",++t);
    }
    else if(Sh1>Fh2)
        printf("Case %d: Hits Meeting\n",++t);
    else if(Sh1==Fh2){
        if(Sm1>Fm2)
             printf("Case %d: Hits Meeting\n",++t);
        else
             printf("Case %d: Mrs Meeting\n",++t);
    }
    else
printf("Case %d: Mrs Meeting\n",++t);
}
return 0;
}
