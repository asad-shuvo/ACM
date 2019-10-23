#include<bits/stdc++.h>
using namespace std;
string s;
int item;
int fun(int pos, int state, int cnt,string ss)
{
    int res = 0;
  //  cout<<pos<<endl;
    if(pos == s.size())
    {

        cout << ss << endl;
        return cnt;
    }

    int next_state;
    int low = 0, high = 9;
    if(state == 1) high = s[pos]-'0';
    for(int i=low; i<= high; i++)
    {
        if(state == 0) next_state = 0;
        else
        {
            if(i==high)
                next_state = 1;
            else
                next_state = 0;
        }
        char ch = i+'0';
        if(i==item)
        {
            res += fun(pos+1, next_state, cnt+1,ss+ch);
        }
        else
        {
            res += fun(pos+1, next_state, cnt,ss+ch);
        }
    }
    return res;

}
int main()
{
    cin >> s >> item;
    int Tot = fun(0,1,0,"");
    cout << endl << Tot << endl;
}

