#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdio.h>
#define rep(i,n) for(int i = 0; i < n; i++)

using namespace std;
typedef long long ll;

double calDis(pair<int,int> p1, pair<int,int> p2){
  return sqrt(pow(p1.first-p2.first,2)+pow(p1.second-p2.second,2));
}

int fac(int n){
  if(n == 1) return 1;
  else if(n >= 2) return n*fac(n-1);
}

int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  vector<pair<int,int> > vp(n);
  rep(i,n){
    v[i] = i;
    cin >> vp[i].first >> vp[i].second;
  }

  double sum = 0.;
  do{
    for(int i=0; i<n-1; i++){
      sum += calDis(vp[v[i]],vp[v[i+1]]);
    }
  }while(next_permutation(v.begin(), v.end()));
    
  printf("%.10f", sum/fac(n));
}

