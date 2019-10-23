#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000

/*
int calcLCS(int i,int j)
{
	if(A[i]=='\0' or B[j]=='\0') return 0;
	if(visited[i][j])return dp[i][j];

	int ans=0;
	if(A[i]==B[j]) ans=1+calcLCS(i+1,j+1);
	else
	{
		int val1=calcLCS(i+1,j);
		int val2=calcLCS(i,j+1);
		ans=max(val1,val2);
	}
	visited[i][j]=1;
	dp[i][j]=ans;
	return dp[i][j];
}*/
int main()
{
    int test,te=0;
    //sc("%d",&test);
    //while(test--){
   string A,B;

    int f=0,f1=0;
   while(getline(cin,A)){

    getline(cin,B);
vector<string>str1,str2;
    for(int i=0;i<A.size();i++){
        if((A[i]>='A' && A[i]<='Z') || (A[i]>='a' && A[i]<='z') || (A[i]>='0' && A[i]<='9'))
            {
f=1;
            }
            else
                A[i]=' ';
    }
    for(int i=0;i<B.size();i++){
        if((B[i]>='A' && B[i]<='Z') || (B[i]>='a' && B[i]<='z') || (B[i]>='0' && B[i]<='9'))
        {
f1=1;
        }
        else
            B[i]=' ';
    }
    stringstream ss(A);
    string d,c;
    while(ss>>d)
    {
        str1.p_b(d);
    }
    stringstream ss1(B);
    while(ss1>>c)
    {
        str2.p_b(c);
    }
    //for(int i=0;i<str2.size();i++)
      //  cout<<str2[i]<< " ";
        int m=str1.size();
        int n=str2.size();
        int L[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                    L[i][j]=0;
                else if(str1[i-1]==str2[j-1])
                    L[i][j]=L[i-1][j-1]+1;
                else
                    L[i][j]=max(L[i-1][j],L[i][j-1]);
            }
        }
        if(L[m][n]==0)
            pr("%d. Blank!\n",++te);
        else
        pr("%d. Length of longest match: %d\n",++te,L[m][n]);
}
}

