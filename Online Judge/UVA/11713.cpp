#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int test;
    scanf("%d",&test);
    //getchar();
    while(test--){
    cin>>a>>b;
    int i,j,l,f=0,k=1;
    if(a.size()==b.size()){
            for(i=0;i<a.size();i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            if(b[i]=='a')
                f=1;
            else if(b[i]=='i')
                f=1;
            else if(b[i]=='e')
                f=1;
            else if(b[i]=='o')
                f=1;
            else if(b[i]=='u')
                f=1;
            else
                k=0;
        }
        else if(a[i]!=b[i])
            k=0;
        }
        if(k==0)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;

    }
    return 0;
}
