#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string a,b,c;
    int f1,f2,f3;
    cin>>a>>b>>c;
    if((a=="A>B" || a=="B<A") && (b=="B>C" || b=="C<B") && (c=="A>C" || c=="C<A"))
        cout<<"CBA"<<endl;
    else if((a=="A>B" || a=="B<A") && (b=="C>B" || b=="B<C") && (c=="A>C" || c=="C<A"))
        cout<<"BCA"<<endl;
    else if((a=="B>A" || a=="A<B") && (b=="B>C" || b=="C<B") && (c=="C>A" || c=="A<C"))
        cout<<"ACB"<<endl;
    else if((a=="B>A" || a=="A<B")&& (b=="C>B" || b=="B<C") && (c=="C>A" || c=="A<C"))
        cout<<"ABC"<<endl;
    else
        cout<<"Impossible"<<endl;
}
