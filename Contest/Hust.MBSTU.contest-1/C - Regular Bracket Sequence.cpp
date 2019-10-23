#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,count;
    stack<int>stk;
    string str;
    getline(cin,str);
    count=0;
    for(i=0;i<str.length();i++)
    {
        if(stk.empty() != 1 && str[i] == ')' && stk.top() == '(')
        {
            stk.pop();
            count++;
        }
        else{ stk.push(str[i]);}
    }
    printf("%d\n",count*2);
}
