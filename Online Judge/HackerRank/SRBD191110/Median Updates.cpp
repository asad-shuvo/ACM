#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */

void median(vector<char> s,vector<int> X) {
    vector<int>v;
    for(int i=0;i<X.size();i++){
        if(s[i]=='a'){
            if(v.size()==0){
                v.push_back(X[i]);
            }
            else{
                 std::vector<int>::iterator upper1, upper2; 
    upper1 = std::upper_bound(v.begin(), v.end(), X[i]); 
    int tmp=upper1-v.begin();
    v.insert(v.begin()+tmp,X[i]);
//    upper2 = std::upper_bound(v.begin(), v.end(), 45); 
            }
        if( ( v.size() % 2 ) == 0 )
        {
            int i = v.size() / 2;
            double x = 0.5 * ( double( v[ i -1 ] ) + double( v[ i ] ) );
            cout << x << endl;
        }
        else
        {
            cout << v[ v.size() / 2 ] << endl;
        }
    }
        else if(s[i]=='r'){
             std::vector<int>::iterator upper1, upper2; 
    upper1 = std::upper_bound(v.begin(), v.end(), X[i]); 

    int tmp=upper1-v.begin();
    if(v.size()==0){
        cout<<"Wrong!"<<endl;
        continue;
    }
//    cout<<tmp<<endl;
    if(tmp==v.size()+1 or (v[tmp-1]!=X[i])){
        cout<<"Wrong!"<<endl;
        continue;
    }
int sz=tmp-1;
if(v.size()>tmp-1)
    v.erase(v.begin()+(tmp-1));
    else {
    	 cout << "Wrong!" << endl;
    	 continue;
	}
    if( v.size()==0 )
    {
        cout << "Wrong!" << endl;
    }
    else
    {
        if( ( v.size() % 2 ) == 0 )
        {
            int z = v.size() / 2;
            double x = 0.5 * ( double( v[ z -1 ] ) + double( v[ z ] ) );
            cout << x << endl;
        }
        else
        {
            cout << v[ v.size() / 2 ] << endl;
        }
    }
        }
//for(int i=0;i<v.size();i++){
//            cout<<v[i]<<" ";
//        }
//        cout<<endl;
    }
        
    
}
int main(void){
cout.precision( 14 );
//Helpers for input and output

	int N;
	cin >> N;
	
	vector<char> s;
    vector<int> X;
	char temp;
    int tempint;
	for(int i = 0; i < N; i++){
		cin >> temp >> tempint;
        s.push_back(temp);
        X.push_back(tempint);
	}
	
	median(s,X);
	return 0;
}
