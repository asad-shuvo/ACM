#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n==3){
            printf("1\n");
        printf("3");
    }
    else if(n==2){
            printf("1\n");
        printf("2");
    }
    else if(n%2==1)
    {
        int p=(n/2);
        printf("%d\n",p);
    for(i=1;i<p;i++){
        printf("2 ");
    }
    printf("3");
    }
    else if(n%2==0)
    {
        int p=(n/2);
    printf("%d\n",p);
         for(i=1;i<p;i++){
        printf("2 ");
    }
    printf("2");
    }
}
