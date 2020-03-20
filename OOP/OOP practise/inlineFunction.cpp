#include<bits/stdc++.h>
using namespace std;
class myClass{
	int a,b;
	public:
		myClass(int x,int y){
			a=x;b=y;
		}
		bool div();
};
inline bool myClass::div(){
	if(a%b==0)return 1;
	else return 0;
}
int main()
{
	myClass ob(4,2);
	cout<<ob.div()<<endl;
}
