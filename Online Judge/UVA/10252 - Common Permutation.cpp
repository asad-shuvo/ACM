#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","rt",stdin);
    string a,b;
    int i,j,k,l,m,n,ary[100],a1[100],a2[100];
   while(getline(cin,a)){
        getline(cin,b);
        k=0;
        m=0;
        l=0;
    int arr[100]={0};
    int ar[100]={0};
    cin>>a>>b;
    for(i=0;i<a.size();i++){
        //if(a[i]>='a' && a[i]<='z'){
            arr[a[i]-'a']++;

    }
    for(i=0;i<b.size();i++){
       // if(b[i]>='a' && b[i]<='z'){
            ar[b[i]-'a']++;
        //}
    }
    for(i=0;i<26;i++){
        if(arr[i]>0 && ar[i]>0){
            if(arr[i]<ar[i]){
               a1[k++]=arr[i];
               a2[l++]=i;
            }
            else if(arr[i]>ar[i]){
               a1[k++]=ar[i];
               a2[l++]=i;
            }
            else if(arr[i]==ar[i]){
               a1[k++]=ar[i];
               a2[l++]=i;
            }
        }
    }
    for(i=0,j=0;i<k,j<l;i++,j++){

        printf("%c",ary[i]+97);
    }
    cout<<endl;
   }
}
