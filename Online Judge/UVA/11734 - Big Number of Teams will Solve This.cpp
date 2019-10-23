#include <bits/stdc++.h>
using namespace std;
int main()
{
     //freopen("input.txt","rt",stdin);
    string a,b,c,d,e,f;
    int i,j,k,l,m,n,test,t=0;
    cin>>test;
    getchar();
    while(test--){
            t++;
    getline(cin,a);
    getline(cin,b);
    c=a;
    d=b;
    for(i=0;i<c.size();i++){
        if(c[i]==' '){
            c.erase(c.begin()+i);
        }
    }
    for(i=0;i<d.size();i++){
        if(d[i]==' '){
            d.erase(d.begin()+i);
        }
    }
    if(c==d && a.size()==b.size()){
        printf("Case %d: Yes\n",t);
    }
    else if(c==d && a.size()!=b.size()){
        printf("Case %d: Output Format Error\n",t);
    }
    else if(c!=d){
        printf("Case %d: Wrong Answer\n",t);
    }
    }
    return 0;

}
