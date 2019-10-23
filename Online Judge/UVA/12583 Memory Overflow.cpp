#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,l,m,n,test,t=0;
    scanf("%d",&test);
    while(test--){
    scanf("%d%d",&k,&l);
    cin>>a;
    int sum=0;
    for(i=0;i<a.size();i++){
        for(j=i+1;j<=i+l;j++){

            if(a[i]==a[j]){
                sum++;
       // a.erase(a.begin()+j);
            }
        }
    }
    printf("Case %d: %d\n",++t,sum);
    }
    return 0;
}
