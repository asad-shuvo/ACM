#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    char c;
    long long int te=0,mat,i,j,k,l,m,n,f,p,test;
    scanf("%lld",&test);
    while(test--){
            te++;
    scanf("%c%c%c%c",&c,&c,&c,&c);
    scanf("%lld",&n);
    vector<long long int>v;
    m=n*n;
    for(i=0;i<m;i++){
            scanf("%lld",&mat);
            v.push_back(mat);
        }
        f=1;
    for(i=0;i<m;i++){
            p=m-1-i;
            if(v[i]!=v[p]){
                f=0;
                break;
            }
            else if(v[i]<0){
                f=0;
                break;
            }

        }
    if(f==1)
        printf("Test #%d: Symmetric.\n",te);
        else
        printf("Test #%d: Non-symmetric.\n",te);
    }
    return 0;
}
