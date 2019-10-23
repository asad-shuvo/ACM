#include <bits/stdc++.h>
using namespace std;
int main()
{
   // set<int>st;
    //freopen("input.txt","rt",stdin);
    int arr[100000],s[100000],q,i,j,k,m,ans,cnt,a,n,day,test;
    scanf("%d",&test);
    while(test--)
    {
        q=0;
        cnt=0;
        a=0;
    scanf("%d",&day);
    scanf("%d",&n);
    set<int>st;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        for(j=arr[i];j<=day;j=j+arr[i])
        {
            if((j%7!=0) && ((j+1)%7!=0))
            {
                st.insert(j);
            }
        }
    }
    cout<<st.size()<<endl;
    }
    return 0;
}

