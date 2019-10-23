#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005

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
int minssqnc(int  n,int k,int arr[])
{
    int start=0,End=0;
    //n=n-1;
    int min_length=n+1,curr_sum=0;
    while(End<n){
        while(curr_sum<=k && End<n){
            curr_sum+=arr[End++];
        }
        while(curr_sum>k && start<n){
            if((End-start)<min_length)min_length=(End-start);
            curr_sum-=arr[start++];
        }
    }
    return min_length;
}

int smallestSubWithSum(int arr[], int n, int x)
{
    // Initialize current sum and minimum length
    int curr_sum = 0, min_len = n+1;

    // Initialize starting and ending indexes
    int start = 0, end1 = 0;
    while (end1 < n)
    {
        // Keep adding array elements while current sum
        // is smaller than x
        while (curr_sum <= x && end1 < n)
        {
            // Ignore subarrays with negative sum if
            // x is positive.
            if (curr_sum <= 0 && x > 0)
            {
                start = end1;
                curr_sum = 0;
            }

            curr_sum += arr[end1++];
        }

        // If current sum becomes greater than x.
        while (curr_sum > x && start < n)
        {
            // Update minimum length if needed
            if (end1 - start < min_len)
                min_len = end1 - start;

            // remove starting elements
            curr_sum -= arr[start++];
        }
    }
    return min_len;
}
int main()
{
//FILE
    int n,amount,i;
    while(sc("%d%d",&n,&amount)!=EOF){
            int arr[100005];
    F(i,0,n-1)sc1(arr[i]);
     //ll n1 = sizeof(arr)/sizeof(arr[0]);
    int D=minssqnc(n,amount,arr);
   // int D=smallestSubWithSum(arr,n,amount);
    if(D>n)cout<<"0"<<endl;
    else
    cout<<D<<endl;
    }
}
