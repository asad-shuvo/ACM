#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],o[100];
    int test,ln,i,j,k,l,m,n,sum=0;
    scanf("%d",&ln);
    for(i=0;i<ln;i++)
    {
        scanf("%s%s",str[i],o[i]);
        k=str[i]-'0';
        //printf("%d\n",k);
        l=o[i]-'0';
        // printf("%d\n",l);
            sum+=(k-l);
    }
  //  printf("%d",k);
    //printf("\n%d",l);
    printf("%d",sum);

}
