#include<bits/stdc++.h>
using namespace std;
class mC{
	int n,d;
	public:
		mC(int i,int j){
			n=i;
			d=j;
		}
		friend int isfactor(mC ob);
};
int isfactor(mC ob){
	if(ob.n%ob.d==0)return 1;
	else return 0;
}
int main()
{
	mC ob(50,6);
	if(isfactor(ob))cout<<"Factor"<<endl;
	else cout<<"Not factor"<<endl;
	
}
