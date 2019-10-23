#include<bits/stdc++.h>
using namespace std;
vector<int>G[10000];
int vis[10000];
int n;
int main()

{
    string a,b,d;
    cin>>a;
    int value=a[0]-'A';
    G[value].push_back(value);
    char str[100];
    int arr[1000],k=0,i,j;
    while(cin>>b>>d)
{
    int x=b[0]-'A';
    int y=d[0]-'A';
    G[x].push_back(y);
}
        for(i=0;i<;i++)
}
