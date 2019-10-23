#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005
#define inf 1<<28
/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
struct node
{
    int a,b;
};
int main()
{
    int test,te=0;
    int diff;
    sc1(test);
    while(test--)
    {
        sc1(diff);
        getchar();
        vector<int>dig,powr,v3;
        string A;
        getline(cin,A);
        for(int i=0; i<A.size(); i++)
        {
            if(A[i]=='X')
            {
                if(i==0 || A[i-1]==' ')
                {
                    dig.p_b(1);
                }
                if(A[i+1]!='^')
                    powr.p_b(1);
            }
            if(A[i]>='0' && A[i]<='9')
            {
                if(i==0 || A[i-1]==' ' || A[i+1]=='*' || A[i+2]=='*')
                {

                    if(A[i+1]=='0')
                    {
                        //i++;
                        dig.p_b(10);
                        if(A[i+2]!='*')
                            powr.p_b(0);
                        i++;
                    }
                    else
                    {
                        dig.p_b(A[i]-'0');
                        if(A[i+1]!='*')
                            powr.p_b(0);
                    }
                }
                else if(A[i-1]=='^')
                {
                    if(A[i+1]=='0')
                    {
                        powr.p_b(10);
                        i++;
                    }
                    else powr.p_b(A[i]-'0');
                }
            }
        }
        for(int i=0; i<dig.size(); i++)
        {
            for(int j=0; j<dig.size(); j++)
            {
                if(powr[i]>powr[j])
                {
                    swap(powr[i],powr[j]);
                    swap(dig[i],dig[j]);
                }
                //cout<<dig[i]<<" "<<powr[i]<<endl;
            }
        }
        for(int i=1; i<=diff; i++)
        {
            for(int j=0; j<dig.size(); j++)
            {
                if(powr[j]==0)
                {
                    dig[j]=0;
                }
                else
                {
                    dig[j]=dig[j]*powr[j];
                    powr[j]=powr[j]-1;
                }
            }
        }
       /* for(int i=0; i<dig.size(); i++)
        {
            cout<<dig[i]<<" "<<powr[i]<<endl;
        }*/
        int flag=0;
    pr("Case %d: ",++te);
        for(int i=0; i<dig.size(); i++)
        {
            if(dig[i]!=0)
            {
                if(i!=0)
                    pr(" + ");

                flag=1;
                if(dig[i]==1)
                {
                    if(powr[i]==0)
                    {
                        pr("1");
                    }
                    if(powr[i]>=1)
                    {
                        pr("X");
                        if(powr[i]>1)
                            pr("^%d",powr[i]);
                    }

                }
                else if(dig[i]>1)
                {
                    pr("%d",dig[i]);
                    if(powr[i]>=1)
                    {
                        pr("*X");
                        if(powr[i]>1)
                            pr("^%d",powr[i]);
                    }
                }
            }
        }
        if(flag==0)
            pr("0");
        pr("\n");
    }
}
