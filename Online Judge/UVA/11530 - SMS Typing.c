#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1000];
    int i,j=1,k,l,sum,ln,t;
    scanf("%d",&t);
    getchar();
    while(t--){
            gets(ch);
           sum=0;
    ln=strlen(ch);
    for(i=0;i<ln;i++)
    {
        if(ch[i]=='a' || ch[i]=='d' || ch[i]=='g' || ch[i]=='j' || ch[i]=='m' || ch[i]=='p' || ch[i]=='t' || ch[i]=='w' || ch[i]==' ' )
        {
            sum=sum+1;
        }
        else if(ch[i]=='b' || ch[i]=='e' || ch[i]=='h' || ch[i]=='k' || ch[i]=='n' || ch[i]=='q' || ch[i]=='u' || ch[i]=='x' )
            sum=sum+2;
        else if(ch[i]=='c' || ch[i]=='f' || ch[i]=='i' || ch[i]=='l' || ch[i]=='o' || ch[i]=='r' || ch[i]=='v' || ch[i]=='y' )
            sum=sum+3;
        else if(ch[i]=='s' || ch[i]=='z' )
            sum=sum+4;
    }
    printf("Case #%d: %d\n",j,sum);

   j++;
    }
}
