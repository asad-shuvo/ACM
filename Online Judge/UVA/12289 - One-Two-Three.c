#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    int ln,i,j,k,l,t;
    scanf("%d",&t);
    while(t>0){
    scanf("%s",ch);
    ln=strlen(ch);
    if(ln==3)
    {
        if((ch[0]=='o'&&ch[1]=='n' && ch[2]=='e')||(ch[0]=='o'&&ch[1]=='n')|| (ch[0]=='o'&& ch[2]=='e')||(ch[1]=='n' && ch[2]=='e')){
       printf("1\n");
        }
        else
        {
          printf("2\n");
        }
    }
    else
    {
        printf("3\n");
    }
    t--;
    }
    return 0;
}
