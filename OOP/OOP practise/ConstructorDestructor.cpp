#include<bits/stdc++.h>
using namespace std;
class myClass{
	int a,b;
	public:
		myClass(int x,int y);
		myClass(int x);
		myClass();
		~myClass();
		void show();
		
};
myClass::myClass(int x,int y){
	a=x;
	b=y;
		cout<<"Two parameter Constructor"<<endl;
}
myClass::myClass(){
	cout<<"No parameter Constructor"<<endl;
}
myClass::myClass(int x){
	a=x;
//	cout<<""
		cout<<"One parameter Constructor"<<endl;
}
void myClass::show(){
	cout<<a<<" "<<b<<endl;
}
myClass::~myClass(){
	cout<<"Destructor"<<endl;
}
int main()
{
	myClass ob(1,2);
	myClass ob1(10);
	myClass ob2;
ob.show();
}
