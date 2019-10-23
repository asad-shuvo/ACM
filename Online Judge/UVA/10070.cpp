#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int i,j,d,e,f,k=0,d15,d55,dlp;
    while(cin>>a){
            k++;
    if(k>1)
        printf("\n");
    d15=0;
    d55=0;
    int dlp4=0,dlp100=0,dlp400=0;
    for(i=0;i<a.size();i++){
        d15=((d15*10)+a[i]-'0')%15;
        d55=((d55*10)+a[i]-'0')%55;
        dlp100=((dlp100*10)+a[i]-'0')%100;
        dlp4=((dlp4*10)+a[i]-'0')%4;
        dlp400=((dlp400*10)+a[i]-'0')%400;
    }
    if((dlp4==0 && dlp100!=0 ) || dlp400==0)
    {
        printf("This is leap year.\n");
        if(d15==0){
            printf("This is huluculu festival year.\n");
        }
        if(d55==0)
            printf("This is bulukulu festival year.\n");
    }
    else if(d15==0)
        printf("This is huluculu festival year.\n");
    else
        printf("This is an ordinary year.\n");
}
return 0;
}
