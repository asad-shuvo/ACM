#include<bits/stdc++.h>
using namespace std;
int main()
{
  freopen("input.txt","r",stdin);
     //freopen("output.txt","w",stdout);

    string str;
    int i,j=0,k,l,m,n,c,test;
    cin>>test;
     getchar();
    while(test--){
            j++;
    getline(cin,str);
    int ln=str.size();
    //int ln=strlen(str);
    c=0;
    int k=1;
    for(i=0;i<str.size();i++){
            if(str[i]!='-'){
                k=0;
            }
        if(str[i]=='-'){
           if((str[i-1]!='S' && str[i+1]!='S') && (str[i+1]!='B' && str[i+2]!='B'))
                c++;
           //else if()
        }
    }
   if(k==1)

printf("Case %d: %d\n",j,ln);
    else
    printf("Case %d: %d\n",j,c);
    }
    return 0;
}
