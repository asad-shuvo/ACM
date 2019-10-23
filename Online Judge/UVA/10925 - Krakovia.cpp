#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]={-2,-2,2,2,1,1,-1,-1};///knight move x - exis
int Kfy[]={1,-1,1,-1,2,-2,2,-2};///knight move y- exis
int fx8[]={1,1,1,0,0,-1,-1,-1};
int fy8[]={0,1,-1,1,-1,0,1,-1};
#define ll long long int
#define llu unsigned long long
#define Mx 100005
#define mx 1005
#define inf 1<<28
#define gama 0.57721566490
#define PI              acos(-1.0)
#define INF             0x7fffffff
#define MOD             1000000007
#define EPS             1e-7
/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
ll BM( ll a , ll b , ll m )
{
    if ( b == 0 ) return 1 ;
    ll x = BM(a,b/2,m);
    x = (( x % m) * (x % m))%m;

    if( b % 2 ) x = (( x % m) * (a %m)) % m ;
    return x ;
}
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define forr(i, a, b)   for (__typeof (a) i=a; i<=b; i++)
#define rof(i, b, a)    for (__typeof (a) i=b; i>=a; i--)
#define rep(i, n)       for (__typeof (n) i=0; i<n; i++)

struct Bigint {

    // representations and structures

    string a; // to store the digits

    int sign; // sign = -1 for negative numbers, sign = 1 otherwise



    // constructors

    Bigint() {} // default constructor

    Bigint( string b ) { (*this) = b; } // constructor for string



    // some helpful methods

    int size() { // returns number of digits

        return a.size();

    }

    Bigint inverseSign() { // changes the sign

        sign *= -1;

        return (*this);

    }

    Bigint normalize( int newSign ) { // removes leading 0, fixes sign

        for( int i = a.size() - 1; i > 0 && a[i] == '0'; i-- )

            a.erase(a.begin() + i);

        sign = ( a.size() == 1 && a[0] == '0' ) ? 1 : newSign;

        return (*this);

    }



    // assignment operator

    void operator = ( string b ) { // assigns a string to Bigint

        a = b[0] == '-' ? b.substr(1) : b;

        reverse( a.begin(), a.end() );

        this->normalize( b[0] == '-' ? -1 : 1 );

    }



    // conditional operators

    bool operator < ( const Bigint &b ) const { // less than operator

        if( sign != b.sign ) return sign < b.sign;

        if( a.size() != b.a.size() )

            return sign == 1 ? a.size() < b.a.size() : a.size() > b.a.size();

        for( int i = a.size() - 1; i >= 0; i-- ) if( a[i] != b.a[i] )

            return sign == 1 ? a[i] < b.a[i] : a[i] > b.a[i];

        return false;

    }

    bool operator == ( const Bigint &b ) const { // operator for equality

        return a == b.a && sign == b.sign;

    }




    // mathematical operators

    Bigint operator + ( Bigint b ) { // addition operator overloading

        if( sign != b.sign ) return (*this) - b.inverseSign();

        Bigint c;

        for(int i = 0, carry = 0; i<a.size() || i<b.size() || carry; i++ ) {

            carry+=(i<a.size() ? a[i]-48 : 0)+(i<b.a.size() ? b.a[i]-48 : 0);

            c.a += (carry % 10 + 48);

            carry /= 10;

        }

        return c.normalize(sign);

    }

    Bigint operator - ( Bigint b ) { // subtraction operator overloading

        if( sign != b.sign ) return (*this) + b.inverseSign();

        int s = sign; sign = b.sign = 1;

        if( (*this) < b ) return ((b - (*this)).inverseSign()).normalize(-s);

        Bigint c;

        for( int i = 0, borrow = 0; i < a.size(); i++ ) {

            borrow = a[i] - borrow - (i < b.size() ? b.a[i] : 48);

            c.a += borrow >= 0 ? borrow + 48 : borrow + 58;

            borrow = borrow >= 0 ? 0 : 1;

        }

        return c.normalize(s);

    }

    Bigint operator * ( Bigint b ) { // multiplication operator overloading

        Bigint c("0");

        for( int i = 0, k = a[i] - 48; i < a.size(); i++, k = a[i] - 48 ) {

            while(k--) c = c + b; // ith digit is k, so, we add k times

            b.a.insert(b.a.begin(), '0'); // multiplied by 10

        }

        return c.normalize(sign * b.sign);

    }

    Bigint operator / ( Bigint b ) { // division operator overloading

        if( b.size() == 1 && b.a[0] == '0' ) b.a[0] /= ( b.a[0] - 48 );

        Bigint c("0"), d;

        for( int j = 0; j < a.size(); j++ ) d.a += "0";

        int dSign = sign * b.sign; b.sign = 1;

        for( int i = a.size() - 1; i >= 0; i-- ) {

            c.a.insert( c.a.begin(), '0');

            c = c + a.substr( i, 1 );

            while( !( c < b ) ) c = c - b, d.a[i]++;

        }

        return d.normalize(dSign);

    }

    Bigint operator % ( Bigint b ) { // modulo operator overloading

        if( b.size() == 1 && b.a[0] == '0' ) b.a[0] /= ( b.a[0] - 48 );

        Bigint c("0");

        b.sign = 1;

        for( int i = a.size() - 1; i >= 0; i-- ) {

            c.a.insert( c.a.begin(), '0');

            c = c + a.substr( i, 1 );

            while( !( c < b ) ) c = c - b;

        }

        return c.normalize(sign);

    }




    // output method

    void print() {

        if( sign == -1 ) putchar('-');

        for( int i = a.size() - 1; i >= 0; i-- ) putchar(a[i]);

    }

};


int main()
{
    //FILE
     int n,te=0,t=0;
     while(sc1(n)){

     string str1,str2;
     cin>>str1;
     if(n==0 && str1=="0")break;

     cin>>str2;
          Bigint g,a, b, c,d,f;

     a=str2;
     g=str1;
     for(int i=2;i<=n;i++){
        cin>>str2;
        b=str2;
        c=a+b;
        a=c;
     }
     f=a;
     d=f/g;
     pr("Bill #%d costs ",++te);
     a.print();
     pr(": each friend should pay ");
     d.print();
     cout<<endl;
     cout<<endl;
     }
}
