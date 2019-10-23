#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
    int n,c,i,j,k,l,cnt;
    cnt=0;
    scanf("%d%d",&n,&c);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i+1]-arr[i]<=c){
            cnt++;
        }
        else
            cnt=0;
    }
    cout<<cnt<<endl;
}
