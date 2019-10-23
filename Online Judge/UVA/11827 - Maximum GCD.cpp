#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else return gcd(b,a%b);
}
int main()
{
   string s;
   int i,ans,j,k,l,n,a[1000],t;
   cin>>t;
   getchar();
   while(t--){
   getline(cin,s);
   istringstream is(s);
   n=0;
   while(is >> a[n])
    ++n;

   ans=0;
   /*for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
           ans=max(ans,gcd(a[i],a[j]));
       }
   }
   cout<<ans<<endl;
   }
   return 0;
   */
   for(i=0;i<n;i++)
printf("%d ",a[i]);

}}
