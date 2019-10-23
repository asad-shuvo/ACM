#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,base,bin,dec,Hdec,b1,b2,test;
    cin>>test;
    while(test--){
    scanf("%d",&num);
    bin=0;
    int n1=num;
    int n2=num;
    bin=0;
    base=1;
    b1=0;
    while(n1!=0){
        int rem=n1%2;
        if(rem==1)
            b1++;
            n1/=2;
    }
    b2=0;
    while(n2!=0){
        int r=n2%10;
        if(r==1 || r==2 || r==4 || r==8)

            b2++;
        else if(r==3 || r==5 || r==6 || r==9)
            b2=b2+2;
        else if(r==7)
            b2=b2+3;
        n2/=10;
    }
    cout<<b1<<" "<<b2<<endl;
    }
    return 0;
}
