#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
   string a;
    int arr[10000];
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int f=1;
    getchar();
    for(i=0;i<n;i++){
        getline(cin,a);
        int cnt=0;
        for(j=0;j<a.size();j++){
            if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u' || a[j]=='y'){
                cnt++;
            }
        }
       // cout<<cnt<<endl;
        if(cnt!=arr[i])
        {
            f=0;
        }
    }
    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
