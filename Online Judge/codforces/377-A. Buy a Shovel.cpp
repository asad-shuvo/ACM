#include <bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
#define ll long long int
#define llu unsigned long long
#define file_input freopen("input.txt","rt",stdin);
#define file_output freopen("out.txt","wt",stdout);
#include <bits/stdc++.h>
int main()
{
   int i,j,k,l,m,n;
   cin>>m>>n;
 //  k=m-n;
 if(m%10==0)
    cout<<"1"<<endl;
 else if(m%5==0 && m%10!=0)
    cout<<"2"<<endl;
 else{
int sum=m;
   for(i=1; ;i++){
   // m=m+m;
    if((sum-n)%10==0)
        break;
    else
        sum+=m;
        //cout<<m<<endl;
   }
   cout<<i<<endl;
 }
}




