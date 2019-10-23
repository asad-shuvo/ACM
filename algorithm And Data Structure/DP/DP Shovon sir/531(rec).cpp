#include <bits/stdc++.h>
using namespace std;
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define MAXC 3010
//char A[MAXC],B[MAXC];
int lenA,lenB;
int dp[MAXC][MAXC];
bool visited[MAXC][MAXC];
    vector<string>str1,str2;
int calcLCS(int i,int j)
{
    if(i==lenA || j==lenB) return 0;
	//if(A[i]=='\0' or B[j]=='\0') return 0;
//	if(visited[i][j])return dp[i][j];
if(dp[i][j]!=-1) return dp[i][j];
	int ans=0;
	if(str1[i]==str2[j]) ans=1+calcLCS(i+1,j+1);
	else
	{
		int val1=calcLCS(i+1,j);
		int val2=calcLCS(i,j+1);
		ans=max(val1,val2);
	}
	//visited[i][j]=1;
	dp[i][j]=ans;
	return dp[i][j];
}
string ans;
void printlcs(int i,int j)
{
    if(i==lenA or j==lenB)
    {
//cout<<ans<<endl;
return;
    }
    if(str1[i]==str2[j]){
        ans+=str1[i]+" ";
        printlcs(i+1,j+1);
    }
    else{
        if(dp[i+1][j]>dp[i][j+1]) printlcs(i+1,j);
        else  printlcs(i,j+1);
    }

}
string ans1;
int main() {
    //FILE
	 string A,B;
    while(cin>>A){
            str1.clear();
    str2.clear();
    ans.clear();
    memset(dp,-1,sizeof(dp));
    str1.push_back(A);
    while(cin>>A && A!="#"){
        str1.push_back(A);
    }
    while(cin>>B && B!="#"){
            str2.push_back(B);
    }
    ans="";
	lenA=str1.size();
	lenB=str2.size();
	memset(dp,-1,sizeof(dp));
	//printf("%d\n",calcLCS(0,0));
	calcLCS(0,0);
	printlcs(0,0);
	for(int i=0;i<ans.size()-1;i++)
        cout<<ans[i];
    cout<<endl;
	//printAll(0,0);


}
return 0;
}

