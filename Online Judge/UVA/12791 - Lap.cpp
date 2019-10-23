#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,k,sum,l,dif;
    while(scanf("%d%d",&a,&b)!=EOF){
            sum=0;
    j=0;
    dif=b-a;
    for(i=1; ;i++){
            j++;
        sum=sum+dif;
        if(sum>=b)
            break;
    }
    printf("%d\n",j);
    }
    return 0;
}
