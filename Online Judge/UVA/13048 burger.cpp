#include <bits/stdc++.h>
using namespace std;
int main()
{
      //  freopen("input.txt","rt",stdin);
          //freopen("output.txt","w",stdout);

    string a;
    int i,j,k,l,sum,f,test,t=0;
    cin>>test;
    getchar();
    while(test--){
            t++;
        sum=0;
        f=1;
    getline(cin,a);
    for(i=0;i<a.size();i++){
        if(a[i]=='-'){
            if(a[i+1]=='B'){
                f=0;
            }
            else if(a[i+2]=='B'){
                f=0;
            }
            else if(a[i+1]=='S'){
                f=0;
            }
            else if(a[i-1]=='S'){
                f=0;
            }
            else{
                sum++;
            }
        //} && a[i+1]!='B' && a[i+2]!='B' && a[i+1]!='S' && a[i-1]!='S')
          //  sum++;
    }
}
    printf("Case %d: %d\n",t,sum);
}
}
