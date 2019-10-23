#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a[1000],b,c;
    int i,j,k,l,m,n;
    char str[100][10];
    scanf("%d",&n);
   getchar();
    for(i=0;i<n;i++){
    getline(cin,a[i]);
          //  scanf("%s",str[i][j]);
        }
int    f=0;
    for(i=0;i<n;i++){
            for(j=0;j<5;j++){
            if(a[i][j]=='O' && a[i][j-1]=='O'){
                a[i][j]='+';
                 a[i][j-1]='+';
                 f=1;
                 break;
            }
        }
        if(f==1)
            break;
    }
    if(f==1)
    {
        cout<<"YES"<<endl;
    for(i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
    }
    else
        cout<<"NO"<<endl;


}
