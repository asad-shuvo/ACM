#include <sstream>
#include<bits/stdc++.h>
using namespace std;
int main(){

int i = 123;
string out_string;
stringstream ss;
ss << i;
out_string = ss.str();
cout<<out_string<<endl;


///String to int
string str="125";

  int n=atoi(str.c_str());
  cout<<n<<endl;

  return 0;
}

