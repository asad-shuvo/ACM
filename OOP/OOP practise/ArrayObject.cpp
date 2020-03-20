#include<bits/stdc++.h>
using namespace std;
class mC{
	int a;
	public:
		void set_a(int _a){
			a=_a;
		}
		int get_a(){
			return a;
		}
};
int main()
{
	mC arr[5];
	for(int i=0;i<5;i++){
		arr[i].set_a(i);
			}
			for(int i=0;i<5;i++){
				cout<<arr[i].get_a()<<endl;
			}
}
