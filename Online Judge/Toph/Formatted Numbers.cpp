#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	string b="";
	int cnt=0;
	for(int i=a.size()-1;i>=0;i--){
	 cnt++;
	b+=a[i];
	if(cnt==3){
	if(i!=0)b+=',';
	cnt=0;
	}
	}
	reverse(b.begin(),b.end());
	cout<<b<<endl;
}
