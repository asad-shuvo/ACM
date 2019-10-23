#include <bits/stdc++.h>
using namespace std;
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
// Returns length of smallest subarray with sum greater than x.
// If there is no subarray with given sum, then returns n+1
int smallestSubWithSum(int arr[], int n, int x)
{
    // Initialize current sum and minimum length
    int curr_sum = 0, min_len = n+1;

    // Initialize starting and ending indexes
    int start = 0, End = 0;
    while (End < n)
    {
        // Keep adding array elements while current sum
        // is smaller than x
        while (curr_sum <= x && End < n)
            curr_sum += arr[End++];

        // If current sum becomes greater than x.
        while (curr_sum > x && start < n)
        {
            // Update minimum length if needed
            if (End - start < min_len)
                min_len = End - start;

            // remove starting elements
            curr_sum -= arr[start++];
        }
    }
    return min_len;
}


/* Driver program to test above function */
int main()
{
    FILE
    int arr[100005];
    int x,n;
while(scanf("%d%d",&n,&x)!=EOF){
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int res1 = smallestSubWithSum(arr, n, x);
    (res1 == n+1)? cout << "0\n" :
                    cout << res1 << endl;
}
}
