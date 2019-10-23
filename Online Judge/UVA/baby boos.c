#include<stdio.h>
#include<string.h>
int main()
{
    int test,len,N,i,j,p,k;
    char str[1000010],ch_1,ch_2,CH;
    scanf("%d",&test);
    while(test--)
    {
        CH=getchar();
        gets(str);
        len=strlen(str);
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            CH=getchar();
            scanf("%c",&ch_1);
            CH=getchar();
            scanf("%c",&ch_2);
            for(j=0;j<len;j++)
            {
                if(str[j]==ch_2){str[j]=ch_1;}
            }
        }
        printf("%s\n",str);
    }
    return 0;
}

