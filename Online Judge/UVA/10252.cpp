#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,k,l,m,n;
    while(cin>>a>>b){
        int arr[100]={0};
        int arr1[100]={0};
        for(i=0;i<a.size();i++)
        {

                arr[a[i]-'a']++;
            }

        for(i=0;i<b.size();i++){
                arr1[b[i]-'a']++;
            }
        for(i=0;i<26;i++){
                //printf("%d",arr[i]);
            if(arr[i]>0 && arr1[i]>0){

                printf("%c",i+97);
        }
    }
    cout<<endl;
    }

}
