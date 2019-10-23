#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,ans,f=0,mr,ml,fr,fl;
    scanf("%d%d%d%d",&fl,&fr,&ml,&mr);
    if(ml>fl){
        ans=ml-fl;
        if(ans<=(2*fl))
            f=1;
        else
            f=0;
    }
    else if(fl>ml){
        ans=fl-ml;
        if(ans<=ml)
            f=1;
        else
            f=0;
    }
    if(mr>fr){
        ans=mr-fr;
        if(ans<=(2*fr))
            f=1;
        else
            f=0;
    }
    else if(fr>mr){
        ans=fr-mr;
        if(ans<=mr)
            f=1;
        else
            f=0;
    }
    if(f==1)
        printf("YES\n");
    else
        printf("NO\n");
}
