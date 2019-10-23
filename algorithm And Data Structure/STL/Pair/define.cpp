#include <iostream>
using namespace std;

#define pii pair< int, int >
#define ppi pair< pii, int >
#define ff first
#define ss second

int main() {
    ppi p1;
    pii p2;
    cin >> p2.ff >> p2.ss;
    p1 = ppi( p2, p2.ss * p2.ff );
    cout << "entry: " << p1.ff.ff << ", " << p1.ff.ss << endl;
    cout << "product: " << p1.ss << endl;
    return 0;
}
