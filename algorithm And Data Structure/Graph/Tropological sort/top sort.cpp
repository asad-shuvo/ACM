#include <bits/stdc++.h>
using namespace std;
#define f_i freopen("input1.txt","rt",stdin);
#define f_o freopen("out1.txt","wt",stdout);
int main()
{
    //f_i
   // f_o
    int n,m,a,b,indegree[1000],arr[1000];

   while(scanf("%d%d",&n,&m)==2){
        if(n==0  && m==0)
        break;

    vector<int>G[1000];
   vector<int>ans;

   memset(indegree, 0 ,sizeof(indegree));

   while(m--)
   {
       scanf("%d%d",&a,&b);
       G[a].push_back(b);
       indegree[b]++;
   }
   queue<int>q;
   for(int i=1;i<=n;i++)
   {
       if(!indegree[i])
       {
           q.push(i);
       }
   }
   while(!q.empty())
   {
       int u=q.front();
       q.pop();
       ans.push_back(u);
       for(int i=0;i<G[u].size();i++)
       {
           int v=G[u][i];
           indegree[v]--;
           if(!indegree[v])
           {
               q.push(v);
           }
       }
   }
   if(ans.size()>0 )
    printf("%d",ans[0]);
   for(int i=1;i<ans.size();i++)
   {
       printf(" %d",ans[i]);
   }
   printf("\n");
   }
}



