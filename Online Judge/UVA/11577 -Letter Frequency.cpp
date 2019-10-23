#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","rt",stdin);
    string str;
    int i,j,k,l,m,n,test;
    scanf("%d",&test);
    getchar();
    while(test--){
    int arr[30]={0};
    getline(cin,str);
    for(i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            arr[str[i]-97]++;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            arr[str[i]-65]++;
        }
    }
    int mx=arr[0];
    for(i=0;i<26;i++){
            if(arr[i]>mx){
                mx=arr[i];
            }
    }
    for(i=0;i<26;i++){
        if(mx==arr[i]){
            printf("%c",i+97);
        }
    }
    cout<<endl;
    }
    return 0;
}
