#include <bits/stdc++.h>
using namespace std;
int main()
{
    int S[25]={0};
    char A[5000][100];
    string str;
  //  char str[100];
    int k=0;
    while(cin>>str){
        if(str[0]=='#')
            break;

    int i;
    for( i=0;i<str.size();i++){
        A[k][i]=str[i];
    }
    while(i!=21)
        A[k][i++]='a';k++;

    }
    for(int i=0;i<21;i++){
        for(int j=0;j<k;j++){
            if(A[j][i]>='A' && A[j][i]<='Z'){
                S[(A[j][i]-65)]++;

            }
            if(S[(A[j][i])-65]==1)
                cout<<A[j][i];
        }
    }
    cout<<endl;
}
