#include <bits/stdc++.h>
using namespace std;
class player
{
protected:
    string name;
    int power;
public:
    player()
    {
    }
    player(string nam,int p)
    {
        name=nam;
        power=p;
    }
    player operator+(const player&b)
    {
        player ans;
        ans.power=power+b.power;
        ans.name=name+b.name;
        return ans;
    }
    void setpower(int p){
    power=p;
    }
    void setname (string n){
    name=n;
    }
    void showinfo()
    {
        cout<<name<<" "<<power<<endl;
    }
};
int main()
{
    player a;
    player b;
    a.setname("acd");
    b.setname("ppp");
    a.setpower(30);
    b.setpower(3);
    player c=a+b;

    //a("shuvo",30);
    // b.name="abc";
    // a.power=30;
    //b.power=20;
   // player c;
    //c=a+b;
    c.showinfo();
    // cout<<c.name<<" "<<c.power;
}
