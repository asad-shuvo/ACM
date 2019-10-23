#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test,i,j,k,l,m,n,a,t=0;
    scanf("%d",&test);
    while(test--){
        scanf("%d%d",&k,&a);
        printf("Case %d:\n",++t);
        if(k==0){
                int a1=a/3;
            printf("%d\n",a1);
            a=a-a1;
        int a2=a/3;
        a2=a2*2;
        printf("%d\n",a2);
        int a3=a/3;
        printf("%d\n",a3);
        }
        else if(k==1){
            int b1=a*3;
            b1=b1/2;
            int b2=a*2;
            int b3=b1+b2+a;
            printf("%d\n%d\n%d\n",b1,b2,b3);
        }
    }
}
