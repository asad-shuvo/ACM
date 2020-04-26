#include<bits/stdc++.h>
using namespace std;
    int Set(int n,int pos){
        return n=n|(1<<pos);
    }
    bool chk(int n,int pos){
        return (bool)(n&(1<<pos));
    }
    vector<vector<char> >ret;
    int n;
    void Gen(vector<char>v,int mask,string str,int i){
        v.push_back(str[i]);
        if(v.size()==n){
            ret.push_back(v);
            return;
        }
        for(int i=0;i<str.size();i++){
            if(chk(mask,i)==0){
               Gen(v,Set(mask,i),str,i);
            }
        }
        
    }
  int main() {
  	string str;
  	cin>>str;
        int mask=0;
        n=str.size();
        for(int i=0;i<n;i++){
            vector<char>v;
           // v.push_back(str[i]);
            Gen(v,Set(mask,i),str,i);
        }
        for(int i=0;i<ret.size();i++){
        	for(int j=0;j<ret[i].size();j++){
        		cout<<ret[i][j];
			}
			cout<<endl;
		}
    }
