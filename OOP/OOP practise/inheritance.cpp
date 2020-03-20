#include<bits/stdc++.h>
using namespace std;
class baseClass{
	int a;
	public:
		void set_a(int num);
		int get_a();
};

void baseClass::set_a(int num){
	a=num;
}
int baseClass::get_a(){
	return a;
}

class derivedClass : public baseClass{
	int j;
	public:
		void set_j(int n);
		int get_j();
		int mul();
};
void derivedClass::set_j(int n){
	j=n;
}
int derivedClass::get_j(){
	return j;
}
int derivedClass::mul(){
//	cout<<get_a()<<endl;
	return get_a() * j;
}
int main()
{
	derivedClass ob;
	ob.set_a(20);
	ob.set_j(30);
	cout<<ob.mul()<<endl;
}
