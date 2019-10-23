#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p1(23,30);
    pair<int,int>px,py;
    pair<int,int> p2=pair<int ,int >(2,3);
    px=p1;
    py.first = p2.first * px.second , py.second=p2.second * px.first;
    cout<<"py" <<py.first <<","<<py.second<<endl;
    pair< pair <int, int>, pair<int, int> >p3;
    p3 = pair< pair<int, int>, pair <int, int> > (px,py);
    cout<<"p3: ((";
    cout << p3.first.first << ", "<<p3.first.second<<endl;
    cout<<p3.second.first<<" , "<<p3.second.second<<endl;

    /// using make_pair()
    pair<double , pair<string,int> > p4;
    p4=make_pair(3.1416, make_pair("pi",5));
    cout<<"P4 2nd first"<<":"<<p4.second.first<<","<<"p4 first :"<<p4.first<<endl;
    cout<<"p4 second second:"<<p4.second.second<<endl;
    //cout<<py.first<<" "<<py.second<<endl;
}
