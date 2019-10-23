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
//#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
int arr;
int main()
{
    int n,a,b;
    sc("%d%d%d",&n,&a,&b);
    int s=0,d=0,l=0,ddd=0;
    for(int i=0;i<n;i++)
    {
        sc("%d",&arr);
        if(arr==1){
            if(a>=1)a=a-1;
            else if(a==0 && b>0){
                b=b-1;
                l++;
            }
            else if(a==0 && b==0 && l>0){
                l=l-1;
            }
            else if(a==0 && b==0 && l==0){
                ddd++;
                //cout<<deni<<endl;
            }
        }
        if(arr==2){
            if(b>0)b--;
            else {ddd+=2;  //cout<<deni<<endl;
            }
        }
    }
    pr("%d\n",ddd);
}

