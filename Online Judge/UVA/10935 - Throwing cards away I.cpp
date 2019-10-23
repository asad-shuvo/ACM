#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n,i,j,k,l,m;
    while(scanf("%d",&n) && n>0){
    for(i=1;i<=n;i++){
        q.push(i);
    }
    cout<<"Discarded cards:";
    for(i=1; ;i++){
            if(q.size()==1){
            cout<<endl<<"Remaining card: "<<q.front()<<endl;
            q.pop();
            break;
            }
        else if(i%2==1){
                if(q.size()!=2)
            cout<<" "<<q.front()<<",";
        else
            cout<<" "<<q.front();
            q.pop();
        }
        else{
            m=q.front();
            q.push(m);
            q.pop();
        }
    }
    }

    }

