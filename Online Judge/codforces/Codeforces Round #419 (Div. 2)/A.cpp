#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
int main()
{
    int hr,mn, nmin;
    string cln;
sc("%d:%d",&hr,&mn);
   // cin>>hr>>cln>>mn;
    if(hr==0 and mn==0){cout<<"0"<<endl;return 0;}
    if(hr==23 && mn==59){cout<<"1"<<endl;return 0;}
    int cnt=0;
    int rev=0;
    int H=hr;
    cnt=0;
    while(H>0){
            cnt++;
        int rem=H%10;
        H=H/10;
        rev=10*rev+rem;
    }
    if(cnt==1)rev=(10*rev)+0;
    if(mn==rev)cout<<"0"<<endl;
    else{
    if(mn>rev || (rev>=60)){
            if(hr==23){
            cout<<60-mn<<endl;
            return 0;
            }
            if(hr>=5 && hr<=8)
            {
                int mn5=(60-mn)+1;
                mn5+=(10-hr-1)*60;
                cout<<mn5<<endl;return 0;
            }
            if(hr>=15 && hr<=18)
            {
                int mn5=(60-mn)+2;
                mn5+=(20-hr-1)*60;
                cout<<mn5<<endl;return 0;
            }
    else{
         nmin=(60-mn);
         hr=hr+1;
         int rev1=0,cnt1=0;
int         H1=hr;
         while(H1>0){
            cnt1++;
        int rem=H1%10;
        H1=H1/10;
        rev1=10*rev1+rem;
    }
    if(cnt1==1)rev1=rev1*10+0;
         nmin+=rev1;
         //nmin=nmin+(hr2*60);
        //nmin=nmin+mn;
        cout<<nmin<<endl;
        return 0;
    }
    }
    else{
        cout<<rev-mn<<endl;
        return 0;
    }

    //cout<<nmin<<endl;
    }
}


