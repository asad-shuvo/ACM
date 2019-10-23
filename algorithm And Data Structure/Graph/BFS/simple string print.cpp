#include <bits/stdc++.h>
using namespace std;
void rec(char str[]){
    if(str[0]=='\0')
        return;
    else {
            rec(str+1);
        printf("%c\n",str[0]);
      //  rec(str+1);
    }
}
int main()
{
    char str[100];
    int i,ln;
    cin>>str;
    rec(str);
}
