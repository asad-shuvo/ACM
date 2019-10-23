#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 10000005
#define inf 1<<28

ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=10000000;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(10000000);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=10000000;j+=i){
                status[j]=1;
            }
        }
    }
}
int v[9999999];
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
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
int main()
{
    sieve();
    string a;
    cin>>a;
    int value=0,value1,value2,value3,value4,value5,value6,value7;
    int sum=0;
    status[1]=1;
    status[0]=1;
    memset(v,0,sizeof(v));
    for(int i=0;i<a.size();i++){
        value=0;
        value=value*10+a[i]-'0';
        if(status[value]==0 && v[value]==0){sum++;
       // cout<<value<<endl;
        v[value]=1;
        }
    }
    if(a.size()>1){
    for(int i=0;i<a.size();i++){
            value1=0;
        value1=value1*10+a[i]-'0';
        for(int j=0;j<a.size();j++){
                if(i!=j){
                        value2=0;
        value2=value1*10+a[j]-'0';
        if(status[value2]==0 && v[value2]==0){
        sum++;
        //cout<<value2<<endl;
        v[value2]=1;
                }
    }
    }
    }
    }
    if(a.size()>2){
    for(int i=0;i<a.size();i++){
            value1=0;
        value1=value1*10+a[i]-'0';
        for(int j=0;j<a.size();j++){
                value2=0;
                if(i!=j){
        value2=value1*10+a[j]-'0';
                }
                for(int k=0;k<a.size();k++){
                    value3=0;
                    if(i!=j && i!=k && j!=k){
                        value3=value2*10+a[k]-'0';
                        if(status[value3]==0 && v[value3]==0){
                            sum++;
                            //cout<<value3<<endl;
                            v[value3]=1;
                        }
                    }
                }
    }
    }
    }
    if(a.size()>3){
    for(int i=0;i<a.size();i++){
            value1=0;
        value1=value1*10+a[i]-'0';
        for(int j=0;j<a.size();j++){
                value2=0;
                if(i!=j){
        value2=value1*10+a[j]-'0';
                }
                for(int k=0;k<a.size();k++){
                    value3=0;
                    if(i!=k && i!=j && j!=k){
                        value3=value2*10+a[k]-'0';

                    }
                    for(int l=0;l<a.size();l++){
                            value4=0;
                        if(i!=l && i!=j && i!=k && j!=l && j!=k && k!=l){
                            value4=value3*10+a[l]-'0';
                            if(status[value4]==0 && v[value4]==0){
                            sum++;
                            //cout<<value4<<endl;
                            v[value4]=1;
                        }
                        }
                    }
                }
    }
    }
    }
    if(a.size()>4){
    for(int i=0;i<a.size();i++){
            value1=0;
        value1=value*10+a[i]-'0';
        for(int j=0;j<a.size();j++){
                value2=0;
                if(i!=j){
        value2=value1*10+a[j]-'0';
                }
                for(int k=0;k<a.size();k++){
                    value3=0;
                    if(i!=j && i!=k && j!=k ){
                        value3=value2*10+a[k]-'0';

                    }
                    for(int l=0;l<a.size();l++){
                            value4=0;
                        if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
                            value4=value3*10+a[l]-'0';
                        }
                        for(int m=0;m<a.size();m++){
                            value5=0;
                            if(i!=j && i!=k && i!=l && i!=m && j!=k && j!=l && j!=m && k!=l && k!=m && l!=m){
                            value5=value4*10+a[m]-'0';
                            if(status[value5]==0 && v[value5]==0){
                            sum++;
                            cout<<value5<<endl;
                            v[value5]=1;
                        }
                        }
                        }
                    }
                }
    }
    }
    }
    if(a.size()>5){
    for(int i=0;i<a.size();i++){
            value1=0;
        value1=value1*10+a[i]-'0';
        for(int j=0;j<a.size();j++){
                value2=0;
                if(i!=j){
        value2=value1*10+a[j]-'0';
                }
                for(int k=0;k<a.size();k++){
                    value3=0;
                    if(i!=j && i!=k && j!=k){
                        value3=value2*10+a[k]-'0';

                    }
                    for(int l=0;l<a.size();l++){
                            value4=0;
                        if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
                            value4=value3*10+a[l]-'0';

                        }
                        for(int m=0;m<a.size();m++){
                                value5=0;
                            if(i!=j && i!=k && i!=l && i!=m && j!=k && j!=l && j!=m && k!=l && k!=m && l!=m){
                            value5=value4*10+a[m]-'0';

                        }
                        for(int n=0;n<a.size();n++){
                                value6=0;
                            if(i!=j && i!=k && i!=l && i!=m && i!=n && j!=k && j!=l && j!=m && j!=n && k!=l && k!=m && k!=n && l!=m && l!=n && m!=n){
                            value6=value5*10+a[n]-'0';
                            if(status[value6]==0 && v[value6]==0){
                            sum++;
                            //cout<<value6<<endl;
                            v[value6]=1;
                        }
                        }
                        }
                    }
                }
    }
    }
    }
    }
    if(a.size()>6){
    for(int i=0;i<a.size();i++){
            value1=0;
        value1=value1*10+a[i]-'0';
        for(int j=0;j<a.size();j++){
                value2=0;
                if(i!=j){
        value2=value1*10+a[j]-'0';
                }
                for(int k=0;k<a.size();k++){
                    value3=0;
                    if(i!=j && i!=k && j!=k){
                        value3=value2*10+a[k]-'0';

                    }
                    for(int l=0;l<a.size();l++){
                            value4=0;
                        if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
                            value4=value3*10+a[l]-'0';

                        }
                        for(int m=0;m<a.size();m++){
                                value5=0;
                            if(i!=j && i!=k && i!=l && i!=m && j!=k && j!=l && j!=m && k!=l && k!=m && l!=m){
                            value5=value4*10+a[m]-'0';

                        }
                        for(int n=0;n<a.size();n++){
                                value6=0;
                            if(i!=j && i!=k && i!=l && i!=m && i!=n && j!=k && j!=l && j!=m && j!=n && k!=l && k!=m && k!=n && l!=m && l!=n && m!=n){
                            value6=value5*10+a[n]-'0';
                        }
                        for(int o=0;o<a.size();o++){
                            value7=0;
                          if(i!=j && i!=k && i!=l && i!=m && i!=n && i!=o && j!=k && j!=l && j!=m && j!=n && j!=o && k!=l && k!=m && k!=n && k!=o && l!=m && l!=n && l!=o && m!=n && m!=o && n!=o){
                            value7=value6*10+a[o]-'0';
                            if(status[value7]==0 && v[value7]==0){
                            sum++;
                            //cout<<value7<<endl;
                            v[value7]=1;
                        }
                        }
                        }
                        }
                    }
                }
    }
    }
    }
    }
    //cout<<status[01]<<endl;
    cout<<sum<<endl;
}

