#include<bits/stdc++.h>
using namespace std;
class Access{
	int a;
	public:
	void set_a(int num);
	int get_a();
		
};
void Access::set_a(int num){
	a=num;
}
int  Access::get_a(){
	return a;
}
int main()
{
	Access obj;
	obj.set_a(10);
	cout<<obj.get_a()<<endl;
}
