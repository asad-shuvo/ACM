#include <bits/stdc++.h>
using namespace std;
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
long long int N = 1000005, status[1000005];
long long int siz;
 vector<int>arr;
void sieve() {
 long long int i, j, sqrtN;
 arr.push_back(2);
 for( i = 2; i <= N; i++ ) status[i] = 0;
 //sqrtN = int( sqrt((double) N ));
 for( i = 3; i <=N; i += 2 ) {
 if( status[i] == 0 ) {
        arr.push_back(i);
 for( j = i * i; j <= N; j += i + i )
 status[j] = 1;
 }
 }
 siz=arr.size();
// for(i=0;i<arr.size();i++)
    //cout<<arr[i]<<endl;
}
long long int prime1(long long int item){
long long int   found=0;
    long long int start=0,endd=siz-1;
     while(start<=endd)
    {
long long int       mid=(start+endd)/2;
        if(arr[mid]==item){
            found=1;
            break;
        }
        else if(arr[mid]>item)
        {
            endd=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return found;
}
int main()
{
    //f_i
    //f_o
    sieve();
     long long int i,j,k,l,m,n;
    while(scanf("%lld",&n)!=EOF && n>0){
    printf("%lld:\n",n);
    i=2;
    while(i<n){
            j=n-i;
        if(prime1(i)==1 && prime1(j)==1){
                printf("%lld+%lld\n",i,j);
                break;
            }
      i++;
    }
    if(i>j)
        printf("NO WAY!\n");
    }
    return 0;
}

