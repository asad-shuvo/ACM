#include <stdio.h>
#include<string.h>
int main()
{
    freopen("input.txt","rt",stdin);
    char s1[20],s2[20];
    int d1,d2,y1,y2,count,k,i,test;
    scanf("%d",&test);
    while(test--){
    scanf("%s%d%d",s1,&d1,&y1);
    scanf("%s%d%d",s2,&d2,&y2);
       if((s1[0]=='J'|| s1[0]=='F') && ((s2[0]=='J'|| ((s2[0]=='F')&& d2<29))))
       {
           count=0;
            for(i=y1;i<y2;i++)
            {
                k=i;
               if(((k%4==0) && (k%100!=0)) || (k%400==0))
                {
                    count++;
                }
            }
       }
       else if((s1[0]=='J'|| s1[0]=='F') && (((s2[0]=='F')&& d2==29)))
       {
           count=0;
            for(i=y1;i<=y2;i++)
            {
                k=i;
                if(((k%4==0) && (k%100!=0)) || (k%400==0))
                {
                    count++;
                }
            }
       }
      else if((s1[0]=='J'|| s1[0]=='F') && (s2[0]!='J' ||s2[0]!='F'))
       {
           count=0;
            for(i=y1;i<=y2;i++)
            {
                k=i;
                if(((k%4==0) && (k%100!=0)) || (k%400==0))
                {
                    count++;
                }
            }
       }
       else if((s1[0]!='J'|| s1[0]!='F') && (s2[0]!='J' ||s2[0]!='F'))
       {
           count=0;
            for(i=y1+1;i<=y2;i++)
            {
                k=i;
                if(((k%4==0) && (k%100!=0)) || (k%400==0))
                {
                    count++;
                }
            }
       }
       else if((s1[0]!='J'|| s1[0]!='F') && ((s2[0]=='J' ||((s2[0]=='F') && d2<29))))
       {
           count=0;
            for(i=y1+1;i<y2;i++)
            {
                k=i;
                if(((k%4==0) && (k%100!=0)) || (k%400==0))
                {
                    count++;
                }
            }
       }
       else if((s1[0]!='J'|| s1[0]!='F') && ((s2[0]=='F') && d2==29))
       {
           count=0;
            for(i=y1+1;i<=y2;i++)
            {
                k=i;
                if(((k%4==0) && (k%100!=0)) || (k%400==0))
                {
                    count++;
                }
            }
       }
       printf("%d\n",count);
}
}
