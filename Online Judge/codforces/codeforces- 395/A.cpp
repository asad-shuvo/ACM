#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z;
    int cnt=0;
    scanf("%d%d%d",&n,&m,&z);
    for(int i=m;i<=z;i=i+m){
        if(i%n==0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
