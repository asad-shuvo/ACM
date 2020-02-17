#include<bits/stdc++.h>
using namespace std;
int pos=-1;
vector<int>computeTempArray(string pattern){
	vector<int>tmp(pattern.size());
	int index=0;
//	tmp[0]=0;
	for(int i=1;i<pattern.size();){
		if(pattern[i]==pattern[index]){
			tmp[i]=index+1;
			index++;
			i++;
		}
		else{
			if(index!=0){
				index=tmp[index-1];
			}
			else{
				tmp[i]=0;
				i++;
			}
		}
	}
	return tmp;
}
bool solveKmp(string A,string pattern){
	vector<int>prefix=computeTempArray(pattern);
	for(int i=0;i<prefix.size();i++){
		cout<<prefix[i]<<" ";
	}
	cout<<endl;
	int i=0,j=0;
while(i<A.size() and j<pattern.size()){
	if(A[i]==pattern[j]){
		i++,j++;
	}
	else{
		if(j!=0){
			j=prefix[j-1];
		}
		else i++;
	}
	if(j==pattern.size()){
		pos=i-pattern.size();
		return true;
	}
}
return false;
}
int main()
{
	string A,pattern;
	cin>>A>>pattern;
	cout<<solveKmp(A,pattern)<<endl;
	cout<<pos<<endl;
}
