#include<bits/stdc++.h>
using namespace std;
#define Max 10000005
int ST[24][Max];
int A[Max];

void compute_ST(int N){
for(int i=0;i<N;i++) ST[i][0]=i;

for(int k=1;(1<<k)<=N;k++){
        for(int i=0;i+(1<<k)-1<N;i++){
            int x=ST[i][k-1];
            int y=ST[i+(1<<k-1)][k-1];
            ST[i][k]=A[x]<=A[y]?x:y;
        }

}
}

int RMQ(int i,int j){
    int k=log2(j-i);
    int x=ST[i][k];
    int y=ST[j-(1<<k)+1][k];
    return A[x] <=A[y]?x:y;

}
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    compute_ST(N);
    int Q;
    cin>>Q;
    while(Q--){
        int x,y;
        cin>>x>>y;
        cout<<A[RMQ(x-1,y-1)]<<endl;
    }
}
