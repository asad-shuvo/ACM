#include <stdio.h>
int main()
{
    int D1,D2,Y1,Y2,M1,M2,year,test,i=1;
    scanf("%d",&test);
    while(test>0){
    scanf("%d/%d/%d%d/%d/%d",&D1,&M1,&Y1,&D2,&M2,&Y2);
    if(Y1==Y2 && M2>M1)
    {
       printf("Case #%d: Invalid birth date\n",i);
    }
       else if (Y1==Y2 && M1==M2 && D2>D1){
        printf("Case #%d: Invalid birth date\n",i);
       }
    else if(Y2>Y1){
        printf("Case #%d: Invalid birth date\n",i);
    }
    else if(Y2==Y1 && M1>M2)
    {
        printf("Case #%d: 0\n",i);
    }
    else if(Y2==Y1 && M1==M2 && D1>D2)
    {
        printf("Case #%d: 0\n",i);
    }
    else if(Y2==Y1 && M1==M2 && D1==D2)
    {
        printf("Case #%d: 0\n",i);
    }
    else if(Y1>Y2)
    {
        if(M1>M2)
        {
            year=Y1-Y2;
            if(year>130){
        printf("Case #%d: Check birth date\n",i);
            }
            else
            printf("Case #%d: %d\n",i,year);
        }
        else if(M1<M2)
        {
            year=(Y1-Y2)-1;
            if(year>130){
        printf("Case #%d: Check birth date\n",i);
            }
            else
            printf("Case #%d: %d\n",i,year);
        }
        else if(M1==M2 && D1>D2)
        {
            year=Y1-Y2;
            if(year>130){
        printf("Case #%d: Check birth date\n",i);
            }
            else
            printf("Case #%d: %d\n",i,year);
        }
        else if(M2==M1 && D2>D1)
        {
            year=(Y1-Y2)-1;
            if(year>130){
        printf("Case #%d: Check birth date\n",i);
            }
            else
            printf("Case #%d: %d\n",i,year);
        }
        else if(M2==M1 && D2==D1)
        {
            year=(Y1-Y2);
            if(year>130){
        printf("Case #%d: Check birth date\n",i);
            }
            else
            printf("Case #%d: %d\n",i,year);
        }
    }
    test--;
    i++;
}
return 0;
}
