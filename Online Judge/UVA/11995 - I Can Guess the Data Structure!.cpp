#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);

int main()
{
  //  FILE
    int n,i;
while(sc("%d",&n)!=EOF){

    stack<int>stk;
    queue<int>q;
    priority_queue<int>pq;
    int f1=0,f2=0,f3=0;
    int cnt=0;
    FOR(i,1,n){
    int a,b;
    sc("%d%d",&a,&b);
    if(a==1){
        stk.push(b);
        q.push(b);
        pq.push(b);
    }
    if(a==2){
        cnt++;
        //int ber_kora;
        if(!stk.empty()){
        int la1=stk.top();
        stk.pop();
        if(b==la1)
        {
            f1++;
        }
        }
        if(!q.empty()){
        int la2=q.front();
        q.pop();
        if(b==la2){
            f2++;
        }
        }
        if(!pq.empty()){
        int la3=pq.top();
        pq.pop();
        if(b==la3)
        {
            f3++;
        }
        }
    }
    }
    if(f1==cnt && f2!=cnt && f3!=cnt){
        cout<<"stack"<<endl;
    }
     if(f1!=cnt && f2==cnt && f3!=cnt)
        cout<<"queue"<<endl;
         if(f1!=cnt && f2!=cnt && f3==cnt)
         cout<<"priority queue"<<endl;
     if((f1==cnt && f2==cnt) || (f1==cnt && f3==cnt) || (f2==cnt && f3==cnt))
        cout<<"not sure"<<endl;
     if(f1!=cnt && f2!=cnt && f3!=cnt)
        cout<<"impossible"<<endl;
}
}
