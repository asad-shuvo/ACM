#include <bits/stdc++.h>
using namespace std;

int main() {
    	int n;
	while(scanf("%d",&n)&&n>0){

	priority_queue<int, vector<int>, greater<int> > pq;
	while(n--){
        int m;
        scanf("%d",&m);
        pq.push(m);
	}
	int cost1=0;
	while(pq.size()>1){
            int a1=pq.top();
           // cout<<a1<<endl;
            pq.pop();
            int a2=pq.top();
         //   cout<<a2<<endl;
            pq.pop();

int        cost=(a1+a2);
       // cout<<cost<<endl;
        pq.push(cost);
        cost1+=cost;
	}

	cout<<cost1<<endl;
	}
	return 0;
}
