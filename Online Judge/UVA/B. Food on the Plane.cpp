#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,res,n;
    char a;
    scanf("%lld%c",&n,&a);
    if(a=='a')
        l=4;
    if(a=='b')
        l=5;
        if(a=='c')
        l=6;
        if(a=='d')
        l=3;
        if(a=='e')
        l=2;
        if(a=='f')
        l=1;
        long long int tns;
    if(n%2==0){
       if(n%4==0){
        k=n/2;
         tns=k/2;

        res=(k-1)*6+((tns-1)*3)+(k-tns)+l;
       }
       else{
        k=(n/2)+1;
        tns=k/2;
        res=(k-1)*6+((tns-1)*3)+(k-tns)+l;
       }
        }
        else{
           long long int p=(n/2);

            if(p%2==0)
            {
                p+=1;
            }
            tns=p/2;
            res=(p-1)*6+((tns)*3)+(p-tns-1)+l;
        }
        cout<<res<<endl;
    }

