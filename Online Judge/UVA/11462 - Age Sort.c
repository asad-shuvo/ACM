#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    long  int n,i,j,temp,arr[2000005];
   scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
      scanf("%ld",&arr[i]);
    }
    sort(i,i+n);
    for(i=0;i<n;i++)
    {
        printf("%ld \n",arr[i]);
    }
    printf("\n");
}
