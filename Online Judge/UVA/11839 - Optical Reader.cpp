#include <bits/stdc++.h>
using namespace std;
int main()
{
      //  freopen("input.txt","rt",stdin);

    int a,b,c,d,e,f,n,arr[1000],i,j;
    while(scanf("%d",&n)!=EOF && n>0){
    int m=5;
    while(n--){
            f=0;
    for(i=0;i<m;i++){
        scanf("%d",&arr[i]);
    if(arr[i]<=127){
        f++;
        d=i;
    }
    }
    if(f==1){
        printf("%c\n",d+65);
    }
    else if(f>1){
        printf("*\n");
    }
    else if(f==0)
        printf("*\n");
    }

    }
    return 0;
}
