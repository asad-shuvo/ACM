#include <bits/stdc++.h>
using namespace std;
int main()
{
  // freopen("input.txt","rt",stdin);
  //freopen("output.txt","w",stdout);
    string a;
    int i,j,k,l,m,n,f1,f2,f3;
    while(cin>>a){
    int f=1;
    for(i=0,j=a.size()-1;i<a.size();i++,j--){
    //for(i=0,j=a.size()-1;i<=a.size()/2;i++,j--){
        if(a[i]!=a[j])
        {
            f=0;
        }
    }
    f1=1;
    for(i=0,j=a.size()-1;i<a.size();i++,j--){
  //  for(i=0,j=a.size()-1;i<=a.size()/2;i++,j--){
        if(a[i]=='A' && a[j]!='A')
        f1=0;

        else if(a[i]=='E' && a[j]!='3')
        f1=0;
        else if(a[i]=='H' && a[j]!='H')
        f1=0;
        else if(a[i]=='I' && a[j]!='I')
        f1=0;
        else if(a[i]=='J' && a[j]!='L')
        f1=0;
        else if(a[i]=='L' && a[j]!='J')
        f1=0;
        else if(a[i]=='M' && a[j]!='M')
        f1=0;else if(a[i]=='O' && a[j]!='O')
        f1=0;else if(a[i]=='S' && a[j]!='2')
        f1=0;else if(a[i]=='T' && a[j]!='T')
        f1=0;else if(a[i]=='U' && a[j]!='U')
        f1=0;else if(a[i]=='V' && a[j]!='V')
        f1=0;else if(a[i]=='W' && a[j]!='W')
        f1=0;else if(a[i]=='X' && a[j]!='X')
        f1=0;else if(a[i]=='Y' && a[j]!='Y')
        f1=0;else if(a[i]=='Z' && a[j]!='5')
        f1=0;else if(a[i]=='1' && a[j]!='1')
        f1=0;else if(a[i]=='2' && a[j]!='S')
        f1=0;else if(a[i]=='3' && a[j]!='E')
        f1=0;else if(a[i]=='5' && a[j]!='Z')
        f1=0;else if(a[i]=='8' && a[j]!='8')
        f1=0;
        else if(a[i]=='C' && (a[i]>='A' && a[i]<='Z'))
            f1=0;
        else if(a[i]=='B' && (a[i]>='A' && a[i]<='Z'))
            f1=0;else if(a[i]=='D' && (a[i]>='A' && a[i]<='Z'))
            f1=0;else if(a[i]=='F' && (a[i]>='A' && a[i]<='Z'))
            f1=0;else if(a[i]=='G' && (a[i]>='A' && a[i]<='Z'))
            f1=0;else if(a[i]=='K' && (a[i]>='A' && a[i]<='Z'))
            f1=0;else if(a[i]=='N' && (a[i]>='A' && a[i]<='Z'))
            f1=0;else if(a[i]=='P' && (a[i]>='A' && a[i]<='Z'))
            f1=0;else if(a[i]=='Q' && (a[i]>='A' && a[i]<='Z'))
            f1=0;else if(a[i]=='R' && (a[i]>='A' && a[i]<='Z'))
            f1=0;else if(a[i]=='4' && (a[i]>='A' && a[i]<='Z'))
            f1=0;else if(a[i]=='6' && (a[i]>='A' && a[i]<='Z'))
            f1=0;else if(a[i]=='7' && (a[i]>='A' && a[i]<='Z'))
            f1=0;else if(a[i]=='9' && (a[i]>='A' && a[i]<='Z'))
            f1=0;else if(a[i]=='C' && (a[i]>='1' && a[i]<='9'))
            f1=0;
        else if(a[i]=='B' && (a[i]>='1' && a[i]<='9'))
            f1=0;else if(a[i]=='D' &&(a[i]>='1' && a[i]<='9'))
            f1=0;else if(a[i]=='F' && (a[i]>='1' && a[i]<='9'))
            f1=0;else if(a[i]=='G' &&(a[i]>='1' && a[i]<='9'))
            f1=0;else if(a[i]=='K' && (a[i]>='1' && a[i]<='9'))
            f1=0;else if(a[i]=='N' && (a[i]>='1' && a[i]<='9'))
            f1=0;else if(a[i]=='P' && (a[i]>='1' && a[i]<='9'))
            f1=0;else if(a[i]=='Q' && (a[i]>='1' && a[i]<='9'))
            f1=0;else if(a[i]=='R' && (a[i]>='1' && a[i]<='9'))
            f1=0;else if(a[i]=='4' && (a[i]>='1' && a[i]<='9'))
            f1=0;else if(a[i]=='6' && (a[i]>='1' && a[i]<='9'))
            f1=0;else if(a[i]=='7' && (a[i]>='1' && a[i]<='9'))
            f1=0;else if(a[i]=='9' && (a[i]>='1' && a[i]<='9'))
            f1=0;


    }
    if(f1==1 && f==1)
    {
        cout<<a<<" -- is a mirrored palindrome."<<endl;
    }
    else if(f==0 && f1==1)
        cout<<a<<" -- is a mirrored string."<<endl;
    else if(f==1 && f1==0)
        cout<<a<<" -- is a regular palindrome."<<endl;
    else if(f==0 && f1==0)
        cout<<a<<" -- is not a palindrome."<<endl;
        printf("\n");
    }
    return 0;

}
