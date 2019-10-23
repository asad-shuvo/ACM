#include <bits/stdc++.h>
using namespace std;
#define mx 10005
int main()
{
    int i,j,x,y,N,E,test,te=0;
    scanf("%d",&test);
    while(test--){
 vector<int>G[mx];
 scanf("%d%d",&N,&E);
    for(i=1;i<=E;i++){
            scanf("%d%d",&x,&y);
        G[x].push_back(y);
        G[y].push_back(x);
    }
    printf("Case #%d:\n",++te);
    int arr1[10005]={0},arr2[10005]={0};
    for(i=1;i<=N;i++){
            if(arr2[i]==0){
           // map<int,int>mp;
    //int arr[105];
        int arr[100005];
    int k=0;
        queue<int>Q;
        int taken[mx]={0};
    int cnt=0;
    taken[i]=1;
    Q.push(i);
    //k++;
    arr[k++]=i;
    while(!Q.empty()){
        int u=Q.front();
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
            if(!taken[v]){
           //         k++;
            arr[k++]=v;
                    cnt++;
                taken[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    //k--;
    for(int i=0;i<k;i++){
        cout<<arr[k]<<" "<<cnt<<endl;
    }
    for(int i=0;i<k;i++){
        arr2[arr[k]]=cnt;
    }
    for(i=1;i<=k;i++ )cout<<arr2[k]<<endl;
            }
    }

    //for(int i=0;i<=mx;i++)G[i].clear();

}
}
