#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,d,i,j,k,l;
    scanf("%d%d",&m,&d);
    if(m==1) k=31;
    if(m==2) k=28;
    if(m==3) k=31;
    if(m==4) k=30;
    if(m==5) k=31;
    if(m==6) k=30;
    if(m==7) k=31;
    if(m==8) k=31;
    if(m==9) k=30;
    if(m==10) k=31;
    if(m==11) k=30;
    if(m==12) k=30;

    l=(7-d)+1;
    int T;
    int z=(k-l);
    int t1=(z/7);
    if(z%7==0)
         T=t1+1;
    else
        T=t1+2;
        cout<<T<<endl;
}
