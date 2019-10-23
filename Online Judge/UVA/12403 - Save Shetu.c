#include <stdio.h>
#include <string.h>
int main()
{
    char ch[10000];
   long long int i,j,sum=0,k,t;
    scanf("%lld",&t);
    getchar();
    while(t>0){
   scanf("%s",ch);
    if(ch[0]=='d' && ch[1]=='o' && ch[2]=='n' && ch[3]=='a' && ch[4]=='t' && ch[5]=='e')
    {
        scanf("%lld",&k);
         sum=sum+k;
    }
    else if(ch[0]=='r' && ch[1]=='e' && ch[2]=='p' && ch[3]=='o' && ch[4]=='r' && ch[5]=='t'){
    printf("%lld\n",sum);
}
t--;
    }
    return 0;
}
