#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005

/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
int main()
{
   // FILE
    int n,test,te=0;
    sc("%d",&test);
    while(test--){
            te++;
    if(te>1)cout<<endl;
    sc("%d",&n);
    int z=n;
    int str;
    vector<int>v1,v2,briu,brid;
    while(n--){
        int m;
        sc("%d",&m);
        str=m;
        v1.p_b(m);
    }
    //sort(v1.begin(),v1.end());
int    sum=0;
    //for(int i=0;i<v1.size();i++)cout<<v1[i]<<endl;
    while(1){
            int t1,t2;
            if(v1.size()==0 || v2.size()==z)break;
        if(v1.size()>1){
            sort(v1.begin(),v1.end());
         t1=v1[0];
         t2=v1[1];
         briu.p_b(t1);
         briu.p_b(t2);
         v1.erase (v1.begin(),v1.begin()+2);
                sum+=t2;
         //cout<<t1<<" "<<t2<<endl;
         v2.p_b(t1);
         v2.p_b(t2);
        }
       else if(v1.size()==1){
             t1=v1[0];
             briu.p_b(t1);
            sum+=t1;
           // cout<<v1[0]<<endl;
            v1.erase (v1.begin()+0);
            v2.p_b(t1);
        }
        if(v2.size()==z)break;
        sort(v2.begin(),v2.end());
        //cout<<v2[0]<<endl;
        v1.p_b(v2[0]);
        brid.p_b(v2[0]);
        sum+=v2[0];
        v2.erase(v2.begin()+0);
if(v1.size()==0)break;
        sort(v1.begin(),v1.end());
        int sz=v1.size()-1;
       /* if(sz+1==3){
            briu.p_b(v1[0]);
            briu.p_b(v1[1]);
            v2.p_b(v1[0]);
            v2.p_b(v1[1]);
            sum+=v1[1];
            v1.erase(v1.begin()+0);
            v1.erase(v1.begin()+0);
        }*/
        //else{
         t1=v1[sz-1];
         t2=v1[sz];
         briu.p_b(t1);
         briu.p_b(t2);
         int tt=v1.size()-1;
         v1.erase(v1.begin()+tt);
         v1.erase(v1.begin()+tt-1);
                sum+=t2;
        // cout<<t1<<" "<<t2<<endl;
         v2.p_b(t1);
         v2.p_b(t2);
        //}
         if(v2.size()==z)break;
        sort(v2.begin(),v2.end());
        //cout<<v2[0]<<endl;
        brid.p_b(v2[0]);
        v1.p_b(v2[0]);
        sum+=v2[0];
        v2.erase(v2.begin()+0);
    }
    int dn=0;
    if(z==1){
        cout<<str<<endl;
        cout<<str<<endl;
    }
    else{    cout<<sum<<endl;

    for(int i=0;i<briu.size();i+=2){
            //dn++;
        cout<<briu[i]<<" "<<briu[i+1]<<endl;
        if(brid.size()>dn)cout<<brid[dn]<<endl;
    dn++;
    }
    }
}
}

