#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m;
    char c[10],d;
    cin>>n>>m;
    int f=1;
    int p =n*m;
    for(i=0;i<p;i++){
        scanf("%s",c);
        if(c[0]=='C' || c[0]=='M' || c[0]=='Y')
            f=0;
    }
    if(f==1)
        cout<<"#Black&White"<<endl;
    else
        cout<<"#Color"<<endl;
}
