#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test,te=0;
    cin>>test;
    while(test--){
    string a1,a2,D1,D2;
    char ch,ch1;
    long long int d1,d2,y1,y2;
    cin>>a1>>D1>>y1;
    cin>>a2>>D2>>y2;
    long long int month;
long long int month1;
d1=0,d2=0;
d1=D1[0]-'0';
d1=d1*10+D1[1]-'0';
d2=D2[0]-'0';
d2=d2*10+D2[1]-'0';

    if(a1=="January");
        month=1;if(a1=="February");
        month=2;if(a1=="March");
        month=3;if(a1=="April");
        month=4;if(a1=="May");
        month=5;if(a1=="June");
        month=6;if(a1=="July");
        month=7;if(a1=="August");
        month=8;if(a1=="September");
        month=9;if(a1=="October");
        month=10;if(a1=="November");
        month=11;
    if(a1=="December")
        month=12;
    if(a2=="January");
        month1=1;if(a2=="February");
        month1=2;if(a2=="March");
        month1=3;if(a2=="April");
        month1=4;if(a2=="May");
        month1=5;if(a2=="June");
        month1=6;if(a2=="July");
        month1=7;if(a2=="August");
        month1=8;if(a2=="September");
        month1=9;if(a2=="October");
        month1=10;if(a2=="November");
        month1=11;
    if(a2=="December")
        month1=12;
    long long int year=y2-y1;
    long long int take=0;
    if(year==0){
        if(month<=2  && (month1>2 || (month1==2 && d2==29)) && ((y1%4==0 && y1%100!=0) || y1%400==0))
            take++;
    }if(year==1){
        if(month<=2 && ((y1%4==0 && y1%100!=0) || y1%400==0))
            take++;
        if((month1>2 || (month1==2 && d2==29)) && ((y2%4==0 && y2%100!=0) || y2%400==0))
            take++;
    }
    else if(year==2){
         if(month<=2  &&((y1%4==0 && y1%100!=0) || y1%400==0))
            take++;
            if((y1+1)%4==0 && (((y1+1)%100!=0) || (y1+1)%400==0))
                take++;
                 if((month1 > 2 || (month1==2 && d2==29)) &&((y1+2)%4==0 && (((y1+2)%100!=0) || (y1+2)%400==0)))
                take++;
    }
     else if(year==3){
         if(month<=2  &&((y1%4==0 && y1%100!=0) || y1%400==0))
            take++;
            if((y1+1)%4==0 && (((y1+1)%100!=0) || (y1+1)%400==0))
                take++;
                if((y1+2)%4==0 && (((y1+2)%100!=0) || (y1+2)%400==0))
                take++;
                 if((month1>2 || (month1==2 && d2==29)) && ((y1+3)%4==0 && (((y1+3)%100!=0) || (y1+3)%400==0)))
                take++;
    }
    else if(year==4){
         if(month<=2  &&((y1%4==0 && y1%100!=0) || y1%400==0))
            take++;
            if((y1+1)%4==0 && (((y1+1)%100!=0) || (y1+1)%400==0))
                take++;
                if((y1+2)%4==0 && (((y1+2)%100!=0) || (y1+2)%400==0))
                take++;
                if((y1+3)%4==0 && (((y1+3)%100!=0) || (y1+3)%400==0))
                take++;
                 if((month1>2 || (month1==2 && d2==29)) &&((y1+4)%4==0 && (((y1+4)%100!=0) || (y1+4)%400==0)))
                take++;
    }
    else
    {
         if(month<=2  &&((y1%4==0 && y1%100!=0) || y1%400==0))
            take++;
            if(month>2  &&((y1%4==0 && y1%100!=0) || y1%400==0))
            take--;
            if((month1<2 || (month1==2 && d2!=29)) &&((y2%4==0 && y2%100!=0) || y2%400==0))
            take--;
            if(take==-1 && year%4==0){
            if((month1>2 || (month1==2 && d2==29)) &&((y2%4==0 && y2%100!=0) || y2%400==0))
            take++;
            }

         if(take==1 && (year%4==0))
         {  if((month1>2 || (month1==2 && d2==29))&& ((y2)%4==0 && (((y2)%100!=0) || (y2)%400==0)))
                take++;
         }
         if(take==0)
            take+=(year)/4+1;
         if(take==-1){
            year=year/4;
            take=take+(year)/4+1;
         }
         if(take==1 && year%4==0)
         {
             take+=(year)/4-1;
         }
         if(take==2 && year%4==0)
         {
             take+=(year)/4-2;
         }
         if(take==-2)
         {
             take+=year/4;
         }

    }
   printf("Case %lld: %lld\n",++te,take);
    }

}
