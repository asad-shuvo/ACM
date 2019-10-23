#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
int main()
{
    int p,x,y,f1=0;
    sc("%d%d%d",&p,&x,&y);
    int i=(x/50)%475;
    for(int j=1;j<=25;j++)
    {
        i=(i*96+42)%475;
        if(26+i==p)
            f1=1;
    }
    int take=0;
    if(f1==1)
        pr("0");
    else{
        for(int k=y; ;k++)
        {

            int dif=abs(x-k);
           // cout<<dif<<endl;
           //int to=0;


            if(dif%50==0 || dif%100==0)
            {
                int it=(k/50)%475;
                for(int j=1;j<=25;j++)
    {
        it=(it*96+42)%475;
        if(26+it==p)
            {
                take=k;
                break;
            }
       // cout<<26+i<<endl;
    }
   // if(take>0)break;

            }
             if(take>0) break;
        }
        if(take<x)
            pr("0\n");
        else{
               // cout<<take<<endl;
               int difff;
               if((take-x)%100==0)
             difff=(take-x)/100;
             else
                difff=((take-x)/100)+1;
                pr("%d\n",difff);
        }
       // cout<<take<<endl;
    }
   // cout<<take<<endl;

}


