#include<bits/stdc++.h>
using namespace std;
void add(string a,string b){
	if(a.size()>b.size())swap(a,b);
	int n1=a.size(),n2=b.size();
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int carry=0;
	string ret="";
	for(int i=0;i<n1;i++){
		int sum=a[i]-'0'+b[i]-'0'+carry;
		ret.push_back(sum%10+'0');
		carry=sum/10;
	}
	for(int i=n1;i<n2;i++){
		int sum=b[i]-'0'+carry;
			ret.push_back(sum%10+'0');
		carry=sum/10;
	}
	if(carry!=0){
		ret.push_back(carry+'0');
	}
	reverse(ret.begin(),ret.end());
	cout<<"Addition "<<ret<<endl;
}


int main()
{
	string a,b;
	while(cin>>a>>b){
	
	add(a,b);
}
	
}
