#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int t=0;
    while(getline(cin,a)){
    int cnt=0,i,j;
    t++;
    for(i=0;i<a.size();i++){
        if(a[i]=='b'){
            for(j=0;j<cnt;j++){
                cout<<" ";
            }
            cnt=0;
        }
       else if(a[i]=='!')
            cout<<endl;

        else if(a[i]=='1')
            cnt++;
            else if(a[i]=='2')
            cnt+=2;
            else if(a[i]=='3')
            cnt+=3;
            else if(a[i]=='4')
            cnt+=4;
            else if(a[i]=='5')
            cnt+=5;
            else if(a[i]=='6')
            cnt+=6;
            else if(a[i]=='7')
            cnt+=7;
            else if(a[i]=='8')
            cnt+=8;
            else if(a[i]=='9')
            cnt+=9;
            else
            {
                for(j=0;j<cnt;j++){
                    cout<<a[i];
                }
                cnt=0;
            }

    }
    cout<<endl;
    }

}
