#include<bits/stdc++.h>
using namespace std;
vector<int> dailyTemperatures(vector<int>& T) {
        stack<int>st;
        vector<int>ret;
        int cnt=0;
        for(int i=T.size()-1;i>=0;i--){
            if(st.size()==0){
//            	cout<<++cnt<<" "<<i<<endl;
            	
                ret.push_back(0);
                st.push(i);
                continue;
            }
            while(st.size()>0 and T[st.top()]<=T[i]){
                st.pop();
            }
            if(st.empty()){
//            	cout<<++cnt<<" "<<i<<endl;
                ret.push_back(0);
                st.push(i);
            }
            else{
                if(T[st.top()]>T[i]){
//                	cout<<st.top()<<" "<<T[i]<<endl;
                    cout<<++cnt<<endl;
                    ret.push_back(st.top()-i);
                    st.push(i);
                }
            }
        }
        cout<<ret.size()<<endl;
        reverse(ret.begin(),ret.end());
        return ret;
    }
int main()
{
	vector<int>T;
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		T.push_back(x);
	}
	vector<int>ret;
	ret=dailyTemperatures(T);
	for(int i=0;i<ret.size();i++)cout<<ret[i] <<" ";
	
}
