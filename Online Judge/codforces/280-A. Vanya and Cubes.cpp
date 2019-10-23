#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    cin>>n;
k=0;
int sum=0;
    for(i=1; ;i++){
        if(sum>n){
                i--;
            break;
        }
        k+=i;
        sum+=k;
    }
    cout<<i-1<<endl;
}
