#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","rt",stdin);
    //freopen("output.txt","w",stdout);
    char a[1000];
    int i,j,k,b,n,t=0,test;
    cin>>test;
    getchar();
    while(test--){
            t++;
    n=0;
    gets(a);
    int ln=strlen(a);
    for(i=0;i<ln;i++){
        if(a[i]=='-'){
            if(a[i+1]!='B' && a[i+2]!='B' && a[i-1]!='S' && a[i+1]!='S'){
                n++;
            }
        }
       // if(a[i]=='-' && i==ln-1 && a[i-1]=='D')
         //   n++;
    }
    printf("Case %d: %d\n",t,n);
}
return 0;
}
