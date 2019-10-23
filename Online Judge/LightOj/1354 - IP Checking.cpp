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
    int test,te=0;
    sc("%d",&test);
    while(test--){
    int n,f=1;
    int a1,a2,a3,a4,dec,bin;
    int b1,b2,b3,b4;
    sc("%d.%d.%d.%d",&a1,&a2,&a3,&a4);
    sc("%d.%d.%d.%d",&b1,&b2,&b3,&b4);
    int T=4;
    for(int i=1;i<=4;i++){
        if(i==1){
            dec=a1;
            bin=b1;
        } if(i==2){
            dec=a2;
            bin=b2;
        } if(i==3){
            dec=a3;
            bin=b3;
        } if(i==4){
            dec=a4;
            bin=b4;
        }
        int binary[1000],k=0;
        while(dec){
            binary[k++]=(dec%2);
            dec/=2;
        }
        int k2=0;
        int binary2[1000];
        while(bin){
            binary2[k2++]=(bin%10);
            bin/=10;
        }
        if(k!=k2)f=0;
        for(int j=0;j<k;j++){
            if(binary2[j]!=binary[j])f=0;
        }
    }
    if(f==1)pr("Case %d: Yes\n",++te);
    else
        pr("Case %d: No\n",++te);
}
}


