#include<bits/stdc++.h>
using namespace std;
long long int arr[100005];
int main()
{
	int n;

	scanf("%d",&n);
	for(int i= 0; i < n; i++)
	scanf("%lld",&arr[i]);

	sort(arr, arr+ n);
	int cnt= 0;
	for(int i = 0; i < n; i++){
	if(arr[i] == arr[0])
	cnt++;
	}

	for(int i = 0; i < n; i++){
	if(arr[i] == arr[n - 1])
	cnt++;
	}

	printf("%d\n", n - cnt);
}
