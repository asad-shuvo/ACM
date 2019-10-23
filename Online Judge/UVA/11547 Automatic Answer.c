#include<stdio.h>
int main()
{
    double n,i,j,k,l,p,m,o;
    int rem,rem1,t;
    scanf("%d",&t);
    while(t>0){
          scanf("%lf",&n);
    p=(((((n*567)/9)+7452)*235)/47)-498;
    rem=p/10;
    rem1=rem%10;
    if(rem1<0)
     printf("%d\n",rem1*-1);
    else
    printf("%d\n",rem1);
    t--;
    }
    return 0;


}
