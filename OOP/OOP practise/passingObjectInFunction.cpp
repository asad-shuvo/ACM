#include<bits/stdc++.h>
using namespace std;
class mC{
	int a,b;
	public:
		mC(int x,int y){
			a=x;
			b=y;
		}
		int get(){
			return a*b;
		}
		void Set(int n){
			a=n;
		}
		
};
int sq(mC ob){

ob.Set(100);
int t=ob.get();
return t;
}
int main()
{
	mC ob(20,30);
	cout<<sq(ob)<<endl;
	cout<<ob.get()<<endl;
}
