#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,w,left,right,half,test,i=0;
    scanf("%d",&test);
    while(test--){
            i++;
    scanf("%d",&n);
    left=(9*n)/4;
    right=(11*n)/4;
    half=(3*n)/2;
    printf("Case %d:\n",i);
    printf("%d %d\n",-left,half);
    printf("%d %d\n",right,half);
    printf("%d %d\n",right,-half);
    printf("%d %d\n",-left,-half);
}
return 0;
}
