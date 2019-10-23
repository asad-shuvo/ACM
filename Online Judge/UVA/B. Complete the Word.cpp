#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,l,m,n,f;
    cin>>a;
    f=0;
    if(a.size()==26){
    int arr[100]={0};
    for(i=0;i<26;i++){
        arr[a[i]-'A']++;
    }
    for(i=0;i<26;i++){
        if(arr[i]>1){
            f=1;
        }
    }
    if(f==0){
        for(i=0;i<a.size();i++){
            if(a[i]=='?'){
                for(j=0;j<26;j++){
                    if(arr[j]==0){
                        a[i]=j+'A';
                        arr[j]=1;
                        break;
                    }
                }
            }
        }
         cout<<a<<endl;
    }
    else
        cout<<"-1"<<endl;

    }
    else
        printf("-1\n");
   // if(a.size()==26){

    //}
}
