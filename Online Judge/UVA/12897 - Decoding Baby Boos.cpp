#include <bits/stdc++.h>
using namespace std;
string a;
int main()
{

    char c[10],d[10];
    int i,j,k,l,m,n,test;
    scanf("%d",&test);
    while(test--){
    cin>>a;
scanf("%d",&k);
//getchar();
while(k--){
    scanf("%s%s",d,c);
    //c=getchar();
    for(i=0;i<a.size();i++){
        if(a[i]==c[0])
        {
            a[i]=d[0];
        }
    }
}
cout<<a<<endl;
    }
    return 0;
}
