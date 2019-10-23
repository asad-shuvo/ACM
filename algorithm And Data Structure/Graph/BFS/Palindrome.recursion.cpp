#include <bits/stdc++.h>
using namespace std;
int rec(char s[],int start,int end1){
    if(start>end1)
        return 1;
    if(s[start]!=s[end1])
        return 0;
    else return (s,start+1,end1-1);
}
int main()
{
    char s[100],i,j;
    cin>>s;
    int ln=strlen(s);
    int c=rec(s,0,ln-1);
    if(c==1)
        cout<<"P"<<endl;
    else
        cout<<"NP"<<endl;
}
