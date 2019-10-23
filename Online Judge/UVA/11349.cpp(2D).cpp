#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    char c;
    long long int te=0,mat,q,i,j,k,l,m,n,f,p,test;
    scanf("%lld",&test);
    while(test--){
            te++;
    scanf("%c%c%c%c",&c,&c,&c,&c);
    scanf("%lld",&n);
    vector<long long int>v[100];
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
            scanf("%lld",&mat);
            v[i].push_back(mat);
        }
    }
        f=1;
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){

            p=m-1-i;
            q=m-1-j;
            if(v[i][j]!=v[p][q]){
                f=0;
                break;
            }
            else if(v[i][j]<0){
                f=0;
                break;
            }

        }
    }
    if(f==1)
        printf("Test #%d: Symmetric.\n",te);
        else
        printf("Test #%d: Non-symmetric.\n",te);
    }
    return 0;
}

