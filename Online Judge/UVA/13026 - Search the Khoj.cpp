#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    string a[1005],b;
    int i,j,k,l,n,c,test,te=0;
    scanf("%d",&test);
    while(test--){
            te++;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
    getline(cin,a[i]);
    //cout<<a[i];
    }
    getline(cin,b);
    printf("Case %d:\n",te);
    for(i=0;i<n;i++){
            c=0;
        for(j=0;j<b.size();j++){
            if(a[i][j]!=b[j]){
                c++;
            }
        }
        if(c<=1){
           cout<<a[i]<<endl;
        }
    }
    }
    return 0;

}
