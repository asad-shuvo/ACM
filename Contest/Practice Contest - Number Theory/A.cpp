#include <bits/stdc++.h>
using namespace std;
long long int N = 1000005, status[1000005],arr[1000005];
int main() {
 long long int i, j, sqrtN;
 for( i = 2; i <= N; i++ ) {status[i] = 0,arr[i]=0;}
 arr[2]=1;
 //sqrtN = int( sqrt((double) N )); // have to check primes up to (sqrt(N))
 for( i = 3; i <= N; i += 2 ) {
 if( status[i] == 0 ) {
        arr[i]=1;
 // so, i is a prime, so, discard all the multiples
 // j = i * i, because it’s the first number to be colored
 for( j = i * i; j <= N; j += i + i )
 status[j] = 1; // status of the multiple is 1
 }
 }
 // prlong long intthe primes
 //printf("2 ");
 //for( i = 3; i <= 50; i ++ ) {
 //if( arr[i] == 1 ) printf("%d ", i);
 //}
  long long  int k,l,m,n;
    while(scanf("%lld",&n)!=EOF && n>0){
    printf("%lld:\n",n);
    k=2;
    while(k<n){
            l=n-k;
          //  cout<<arr[l]<<endl;
        if(arr[k]==1 && arr[l]==1){
                printf("%lld+%lld\n",k,l);
                break;
            }
      k++;
    }
    if(k>l)
        printf("NO WAY!\n");
    }
    return 0;
}
