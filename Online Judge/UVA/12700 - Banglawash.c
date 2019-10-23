#include <stdio.h>
int main()
{
    char ch[100];
    int ln,i,j=1,k,n,t;
    scanf("%d",&t);
    while(t--){
          int countA=0,countB=0,countW=0,countT=0;
    scanf("%d",&n);
    scanf("%s",ch);
    for(i=0;i<n;i++)
    {
        if(ch[i]=='A')
            countA++;
        else if(ch[i]=='B')
            countB++;
        else if(ch[i]=='T')
            countT++;
        else if(ch[i]=='W')
        countW++;

    }
    if((countB+countA==n) && countB!=0)
        printf("Case %d: BANGLAWASH\n",j);
    else if((countW+countA==n)&& countW!=0)
        printf("Case %d: WHITEWASH\n",j);
    else if(countA==n)
        printf("Case %d: ABANDONED\n",j);
        else if(countB>countW)
            printf("Case %d: BANGLADESH %d - %d\n",j,countB,countW);
        else if(countW>countB)
            printf("Case %d: WWW %d - %d\n",j,countW,countB);
        else if(countB==countW)
            printf("Case %d: DRAW %d %d\n",j,countB,countT);
            j++;
    }
    return 0;

}
