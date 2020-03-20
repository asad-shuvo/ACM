#include<bits/stdc++.h>
using namespace std;
int f(int a){
	return a;
}
int f(int a,int b){
	return a+b;
}
int main()
{
	int a=10,b=30;
	cout<<f(10)<<" "<<f(a,b)<<endl;
}
