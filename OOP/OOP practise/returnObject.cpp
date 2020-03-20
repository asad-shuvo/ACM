#include<bits/stdc++.h>
using namespace std;
class mC{
	char s[30];
	public:
		
		void set_s(char *_s){
		strcpy(s,_s);
		}
		void show(){
			cout<<s<<endl;
		}
};
mC input(){
	char s[30];
	cin>>s;
	mC ret;
	ret.set_s(s);
	return ret;
}
int main()
{
	mC ob;
	ob=input();
	ob.show();
}
