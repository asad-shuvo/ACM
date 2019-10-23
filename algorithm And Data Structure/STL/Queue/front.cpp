#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int i;
    for(i=1;i<=5;i++)
        q.push(i);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

}
