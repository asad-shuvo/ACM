// C++ program to Count set
// bits in an integer
#include <bits/stdc++.h>
using namespace std;

/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
unsigned int count = 0;
while (n)
{
    count += n & 1;
    n >>= 1;
}
return count;
}

/* Program to test function countSetBits */
int main()
{

  //  unsigned int tke[100000009];
    map<int,unsigned  int>mp;
    for(int i=0;i<=INT_MAX;i++){
        mp[i]=countSetBits(i);
    }
    int test,te=0;
    scanf("%d",&test);
    while(test--){
        int n;
         scanf("%d",&n);
        unsigned int a=mp[n];

        for(int i=n+1;;i++){
            if(mp[i]==a){
                printf("Case %d: %d\n",++te,i);
                break;
            }
    }
}
}
