#include <stdio.h>
int main()
{
   int a[10],b[10],i,j,found,n=5;
   while(scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&b[0],&b[1],&b[2],&b[3],&b[4])!=EOF){
        found=0;
   for(i=0;i<n;i++)
   {
           if(a[i]==b[i]){
            found=1;
            break;
       }
       }
    if(found==1)
    {
        printf("N\n");
    }
    else{
        printf("Y\n");
}
}
return 0;
}
