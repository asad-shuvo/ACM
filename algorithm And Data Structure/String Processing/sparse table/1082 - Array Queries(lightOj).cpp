#include <bits/stdc++.h>
using namespace std;
#define Max 100005
int ST[Max][20];
int A[Max];



int RMQ(int i,int j){
    int k=floor(log2(j-i+1));
    int x=ST[i][k];
    int y=ST[j-(1<<k)+1][k];
   // return min(A[x],A[y]);
    return A[x]<=A[y]?x:y;
}



int main()
{
    int N,Q,test,m=0;
    scanf("%d",&test);
    while(test--){
memset(ST, 0, sizeof(ST));
    scanf("%d",&N);
    scanf("%d",&Q);
    printf("Case %d:\n",++m);

    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        ST[i][0]=i;
    }

    int col=floor(log2(N))+1;
for(int k=1;k<col;k++){
        for(int i=0;i<N+1-(1<<k);i++){
          //  int x=ST[i][k-1];
            //int y=ST[i+(1<<k-1)][k-1];
            if(A[ST[i][k-1]]<=A[ST[i+(1<<k-1)][k-1]])
                ST[i][k]=ST[i][k-1];
            else ST[i][k]=ST[i+(1<<k-1)][k-1];
            //ST[i][k]=A[x]<=A[y]?x:y;
        }

}


    while(Q--){
        int x,y;
        scanf("%d%d",&x,&y);
        printf("%d\n",A[RMQ(x-1,y-1)]);
    }
}
}
