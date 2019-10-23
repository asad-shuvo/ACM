#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int sum;
    vector<int>v1,v,v2;
    while(getline(cin,a)){
             sum=0;
        for(int i=a.size()-1;i>=0;i--){
        if(a[i]=='o')
            sum=sum*10+1;
    if(a[i]==' ')
        sum=sum*10+0;
        }
        int base=1;
        int rem,dec=0;
        while(sum>0){
            rem=sum%10;
            sum=sum/10;
            dec+=rem*base;
            base=base*2;
        }
        //cout<<dec;
        if(dec>0)
        v.push_back(dec);
}
    for(int i=v.size()-1;i>=0;i--){
        int p=v[i];
        printf("%c",p);
    }
}
