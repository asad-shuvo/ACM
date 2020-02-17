#include<stdio.h>
int dp[1200][11];
int x[12],y[12];
int n;
int set(int z,int pos){
	int v=z|(1<<pos);
	return v;
}
bool check(int z,int pos){
	int ret=z&(1<<pos);
	if(ret==0)return 0;
	else return 1;
}
int abs(int a){
	if(a<0)return (a*(-1));
}
int dis(int a,int b){
	int t1=abs(x[a]-x[b]);
	int t2=abs(y[a]-y[b]);
	return t1+t2;
}
int min(int a,int b){
	if(a<b)return a;
	else return b;
}
int fun(int mask,int last){
//	printf("%d %d\n",mask,n);
//	cout<<n<<endl;
	if(mask==(1<<n)-1){
		return dis(last,0);
	}
	if(dp[mask][last]!=-1)return dp[mask][last];
	int mn=1<<28;
	dp[mask][last]=mn;
	for(int i=0;i<n;i++){
		if(!check(mask,i)){
			dp[mask][last]=min(dp[mask][last],dis(last,i+1)+fun(set(mask,i),i+1));
		}
	}
//	printf("%d\n",dp[mask][last]);
	return dp[mask][last];
}
int main()
{
//	freopen("input.txt","rt",stdin);
//	freopen("output.txt","w",stdout);
	int test;
	scanf("%d",&test);
	while(test--){
			for(int i=0;i<=1200;i++){
			for(int j=0;j<=12;j++){
				dp[i][j]=-1;
				x[j]=0;
				y[j]=0;
			}
		}
		int row,col;
		scanf("%d%d",&row,&col);
		scanf("%d%d",&x[0],&y[0]);
//		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d%d",&x[i],&y[i]);
		}
	
//		printf("%d\n",n);
		int ret=fun(0,0);
		printf("The shortest path has length %d\n",ret);
//		cout<<ret<<endl;
	}
}
