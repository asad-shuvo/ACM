#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);

int main()
{
    int i,n;
    int arr[10]={8,9,10,10,10,10,11,18,18,19};
    int key;
    sc("%d",&key);
    n=10;
    int beg=0;
    int endd=n-1;
    int f=0;
    int index=0;
    ///If we want to get the key value from array according to its 1st appears
    while(beg<=endd){
        int mid=(beg+endd)/2;
        if(arr[mid]==key) {
                index=mid;
                endd=mid-1;
            f=1;
            //break;
        }
        else if(arr[mid]>key){
            endd=mid-1;
        }
        else if(arr[mid]<key){
            beg=mid+1;
        }
    }
    if(f==1) cout<<"FOUND"<<" "<<index<<endl;
    else
        cout<<"NOT FOUND"<<endl;

}

