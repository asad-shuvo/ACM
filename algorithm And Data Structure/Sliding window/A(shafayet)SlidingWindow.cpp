#include <sstream>
#include <iostream>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <complex>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <bitset>
#include <list>
#include <string.h>
#include <assert.h>
#include <time.h>
using namespace std;
int arr[1000010];
vector<int>B,B1;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

      deque<int> Q;
      for(int cnt = 0; cnt < n; cnt++)
      {
          int val=arr[cnt];
            while(Q.size()>0 && arr[Q.front()]<=val)
                  Q.pop_front();

            Q.push_front(cnt);
            while(Q.size()>0 && Q.back()<=cnt-k)Q.pop_back();
            if(cnt>=k-1)B.push_back(Q.back());
      }
      Q.clear();
//deque<int> Q;
      for(int cnt = 0; cnt < n; cnt++)
      {
          int val=arr[cnt];
            while(Q.size()>0 && arr[Q.front()]>=val)
            {
                  Q.pop_front();
            }
            Q.push_front(cnt);
            while(Q.size()>0 && Q.back()<=cnt-k)Q.pop_back();
            if(cnt>=k-1)B1.push_back(Q.back());
      }

    //  B1.push_back(arr[Q.front()]);
    cout<<arr[B1[0]];
      for(int i=1;i<B1.size();i++)
        cout<<" "<<arr[B1[i]];
      cout<<endl;
      cout<<arr[B[0]];
      for(int i=1;i<B.size();i++)
        cout<<" "<<arr[B[i]];
      cout<<endl;
}


