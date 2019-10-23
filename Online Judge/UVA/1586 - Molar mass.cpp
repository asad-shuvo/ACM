#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,k,l,m,n,test;
    cin>>test;
    getchar();
    while(test--){
    getline(cin,a);
    double mass=0;
    for(i=0;i<a.size();i++){
        if((a[i]>='A' && a[i]<='Z') && (a[i+1]>='A' && a[i+1]<='Z')){
           if(a[i]=='C'){
            mass+=12.01;

           }
           else if(a[i]=='O'){
            mass+=16.00;
           }
           else if(a[i]=='H'){
            mass+=1.008;
           }
           else if(a[i]=='N'){
            mass+=14.01;
           }
           }
           else if(a[i]>='A' && a[i]<='Z' && i==a.size()-1){
            if(a[i]=='C'){
            mass+=12.01;

           }
           else if(a[i]=='O'){
            mass+=16.00;
           }
           else if(a[i]=='H'){
            mass+=1.008;
           }
           else if(a[i]=='N'){
            mass+=14.01;
           }
           }
           else {
            int value=0;
            if((a[i]>='A' && a[i]<='Z')&&(a[i+1]>='1' && a[i+1]<='9')){
               value=(value*10)+a[i+1]-'0';
               if(a[i+2]>='1' && a[i+2]<='9'){
                value=(value*10)+a[i+2]-'0';
               }
               if(a[i]=='C'){
            mass+=value*12.01;

           }
           else if(a[i]=='O'){
            mass+=value*16.00;
           }
           else if(a[i]=='H'){
            mass+=value*1.008;
           }
           else if(a[i]=='N'){
            mass+=value*14.01;
           }
               }
           }
    }
    //cout<<mass<<endl;
    printf("%.3lf\n",mass);
    }
    return 0;
}
