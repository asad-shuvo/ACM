#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,k,l,m,n,hr,mn,sc,time1,time2,t,speed=0;
    getline(cin,a);
    hr=a[0]-'0';
    hr=hr*10+a[1]-'0';
    hr*=3600;
    mn=a[3]-'0';
    mn=mn*10+a[4]-'0';
    mn*=60;
    sc=a[6]-'0';
    sc=sc*10+a[7]-'0';
    time1=hr+mn+sc;
    for(i=8;i<a.size();i++)
    {
        speed=speed*10+a[i]-'0';
    }
    while(getline(cin,a))
    {
        if
    }
}
