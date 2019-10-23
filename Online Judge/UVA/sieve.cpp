#include<bits/stdc++.h>
using namespace std;
#define mx  20000000
int N = mx, status[mx],a[mx],b[mx];
int main() {
int i, j, sqrtN,k=0,p=0,n;
for( i = 2; i <= N; i++ ) status[i] = 0;
sqrtN = int( sqrt((double) N ));
for( i = 3; i <= sqrtN; i += 2 ) {
if( status[i] == 0 ) {
for( j = i * i; j <= N; j += i + i )
status[j] = 1;
}
}
a[0]=3;
for( i = 5; i <= N; i += 2 ) {
if( status[i] == 0 ) {
    k++;
    a[k]=i;
    //cout<<i<<endl;
    if(a[k]-a[k-1]==2)
    {
        //cout<<a[k]<<" "<<a[k-1]<<endl;
        p++;
        b[p]=i;
    }
}
}
while(scanf("%d",&n)!=EOF){
printf("(%d, %d)\n",b[n]-2,b[n]);
}
return 0;
}
