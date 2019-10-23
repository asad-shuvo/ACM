#include <bits/stdc++.h>
using namespace std;
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);

int main()
{
    FILE
    string a;
    float  speed,prevtime=0,time1,time2,presenttime,final_s=0;
    while(getline(cin,a)){
        if(a.size()==8){
                float  h2=0,m2=0,s2=0;
            h2=h2*10+a[0]-'0';
            h2=h2*10+a[1]-'0';
            m2=m2*10+a[3]-'0';
            m2=m2*10+a[4]-'0';
            s2=s2*10+a[6]-'0';
            s2=s2*10+a[7]-'0';

            time2=s2+(m2*60)+(h2*60*60);
       // cout<<h2<<endl;
       float  fnl=time2-prevtime;
       float  sppp=(fnl*speed)/(3600*3600);
       prevtime=time2;
       final_s=final_s+sppp;

       cout<<a<<" ";
       printf("%.2f km\n",final_s);
        }
        else{
                vector<string>v;
        string a1,a2;
                stringstream ss(a);
        while(ss>>a2){
            v.push_back(a2);
        }
        a1=v[0];
        string sp=v[1];
        //cout<<a1<<" "<<sp<<endl;

        float  h1=0,m1=0,s1=0;
            h1=h1*10+a1[0]-'0';
            h1=h1*10+a1[1]-'0';
            m1=m1*10+a1[3]-'0';
            m1=m1*10+a1[4]-'0';
            s1=s1*10+a1[6]-'0';
            s1=s1*10+a1[7]-'0';
            time1=s1+(m1*60)+(h1*3600);
         if(prevtime!=0)
         {
             float  fnl=time1-prevtime;
       float  sppp=(fnl*speed)/(3600*3600);
        final_s=final_s+sppp;
         }
         prevtime=time1;
                  speed=0;

            for(int  i=0;i<sp.size();i++){
            speed=speed*10+sp[i]-'0';
        }
            speed=speed*3600;
           // cout<<speed<<endl;
        }
    }
}

