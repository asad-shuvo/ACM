#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005
#define inf 1<<28
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
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
int main()
{
    //FILE
    int n;
    while(sc1(n)&&n>0){
    int node=n;
    vector<string>vs;
    map<string,int>mp;
    int mat1[105][105];
    int mat2[105][105];
    int cnt=0;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            if(i==j)mat1[i][j]=0;
            else mat1[i][j]=inf;
        }
    }
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            if(i==j)mat2[i][j]=0;
            else mat2[i][j]=inf;
        }
    }
    for(int i=1;i<=n;i++){
        string a,d,p1,p2;
        int cost;
        cin>>a>>d>>p1>>p2>>cost;
        if(a=="Y"){
            if(mp[p1]==0){++cnt;mp[p1]=cnt;vs.p_b(p1);}
            if(mp[p2]==0){++cnt;mp[p2]=cnt;vs.p_b(p2);}
            if(d=="U"){
                    if(p1!=p2)
                mat1[mp[p1]][mp[p2]]=cost;
                //if(p1!=p2)
                //mat2[mp[p1]][mp[p2]]=inf;
            }
            if(d=="B"){
                if(p1!=p2){
                mat1[mp[p1]][mp[p2]]=cost;
                mat1[mp[p2]][mp[p1]]=cost;
                }
                //if(p1!=p2){
                //mat2[mp[p1]][mp[p2]]=inf;
                //mat2[mp[p2]][mp[p1]]=inf;
                //}
            }
        }
        if(a=="M"){
            if(mp[p1]==0){++cnt;mp[p1]=cnt;vs.p_b(p1);}
            if(mp[p2]==0){++cnt;mp[p2]=cnt;vs.p_b(p2);}
            if(d=="U"){
                    if(p1!=p2)
                mat2[mp[p1]][mp[p2]]=cost;
                //if(p1!=p2)
                //mat1[mp[p1]][mp[p2]]=inf;
            }
            if(d=="B"){
                    if(p1!=p2){
                mat2[mp[p1]][mp[p2]]=cost;
                mat2[mp[p2]][mp[p1]]=cost;
                    }
                //if(p1!=p2){
                //mat1[mp[p1]][mp[p2]]=inf;
                //mat1[mp[p2]][mp[p1]]=inf;
                //}
            }
        }
    }
     for(int k=1;k<=cnt;k++){
        for(int i=1;i<=cnt;i++){
            for(int j=1;j<=cnt;j++){
                mat1[i][j]=min(mat1[i][j],mat1[i][k]+mat1[k][j]);
            }
        }
    }
     for(int k=1;k<=cnt;k++){
        for(int i=1;i<=cnt;i++){
            for(int j=1;j<=cnt;j++){
                mat2[i][j]=min(mat2[i][j],mat2[i][k]+mat2[k][j]);
            }
        }
    }
    string sr,ds;
    cin>>sr>>ds;
    if(mp[sr]==0)mp[sr]=++cnt;
    if(mp[ds]==0)mp[ds]=++cnt;
    int src=mp[sr];
    int des=mp[ds];
    int mny=inf;
    int index;
    vector<int>v1,v2,v3,v4;
    //cout<<mat1[1][2]<<" "<<mat2[1][2]<<endl;
    for(int i=1;i<=n;i++){
        if(mat1[src][i]+mat2[des][i]<=mny && (mat1[src][i]!=inf && mat2[des][i]!=inf)){
            mny=mat1[src][i]+mat2[des][i];
            index=i;
            v1.p_b(mny);
            v2.p_b(index);
        }
    }
    //if(src==des){v1.p_b(0);v2.p_b(src);mny=0;};
    //if(src==des)cout<<"0"<<" "<<sr<<endl;
     if(mny==inf)pr("You will never meet.\n");
    else{
    vector<string>vs2;
    int mnt=mny;
    for(int i=0;i<v1.size();i++){
    if(v1[i]==mnt){
        v3.p_b(v1[i]);
        string AA=vs[v2[i]-1];
        vs2.p_b(AA);
    }
    }
for(int i=0;i<vs2.size();i++){
        for(int j=0;j<vs2.size();j++){
    if(vs2[i]<vs2[j])
            swap(vs2[i],vs2[j]);
            swap(v3[i],v3[j]);
        }
}cout<<v3[0];
for(int i=0;i<v3.size();i++)
    cout<<" "<<vs2[i];

    cout<<endl;
}

}
}
