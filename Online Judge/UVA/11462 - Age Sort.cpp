#include <stdio.h>
#include <algorithm>

using namespace std;
long  int arr[2000005],n,i,j;
int main()
{
  while(scanf("%ld",&n)==1){
        if(n==0)
            break;
    for(i=0;i<n;i++)
      scanf("%ld",&arr[i]);
    sort(arr,arr+i);
    for(i=0;i<n;i++)
    {
        printf("%ld",arr[i]);
        if(i<(n-1))
            printf(" ");
    }
    printf("\n");
  }
  return 0;
}
