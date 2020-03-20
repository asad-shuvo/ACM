#include<bits/stdc++.h>
using namespace std;
class myClass{
	int a;
	public:
		myClass(int n);
		int get();
};
myClass::myClass(int n){
	a=n;
}
int myClass::get(){
	return a;
}
int main()
{
	myClass ob(20);
	myClass *p=&ob;
	cout<<ob.get()<<endl;
	cout<<p->get()<<endl;
}
