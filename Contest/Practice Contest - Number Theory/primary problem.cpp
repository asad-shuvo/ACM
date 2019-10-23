#include <bits/stdc++.h>
using namespace std;
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
long long int N = 1000005, status[1000005];
long long int siz;
 long long int arr[100005];
 //set<int>arr;
 //set<int>::iterator it;
void sieve() {
 //   long long int arr[1000005]={0};
 long long int i, j, sqrtN;
// arr.insert(2);
arr[2]=1;
 for( i = 2; i <= N; i++ ){ status[i] = 0;
 arr[i]=0;
 }
// sqrtN = long long int( sqrt((double) N ));
 for( i = 3; i <=N; i += 2 ) {
 if( status[i] == 0 ) {
        arr[i]=1;
 for( j = i * i; j <= N; j += i + i )
 status[j] = 1;
 }
 }
// siz=arr.size();
 for(i=0;i<50;i++){
    if(arr[i]==1)
        cout<<i<<endl;
 }
    //cout<<arr[i]<<endl;
}/*
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
}*/
int main()
{
    //f_i
    //f_o
    sieve();
    /*
     long long int i,j,k,l,m,n;
    while(scanf("%lld",&n)!=EOF && n>0){
    printf("%lld:\n",n);
    i=2;
    while(i<n){
            j=n-i;
            int f=0,f1=0;
            it=arr.find(j);
            if(it!=arr.end())
                f=1;
        it=arr.find(i);
        if(it!=arr.end())
            f1=1;
        if(f==1 && f1==1){
                printf("%lld+%lld\n",i,j);
                break;
            }
      i++;
    }
    if(i>j)
        printf("NO WAY!\n");
    }
    return 0;*/
}

