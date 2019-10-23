#include<bits/stdc++.h>
using namespace std;

#define ll long long
int n, arr[12];
ll dp[12][12], path[12][12];
ll solve(int l, int r) {//Recursive solution with memoization
	if (l == r)
		return 0;
	ll &res = dp[l][r];
	if (res != -1)
		return res;
	res = 1e9;
	for (int i = l; i < r; ++i) {
		ll tmp = solve(l, i) + solve(i + 1, r) + arr[l - 1] * arr[r] * arr[i];
		if (res > tmp) {
			res = tmp;
			path[l][r] = i;
		}
	}
	return res;
}

void print_path(int l, int r) {
	if (l == r) {
		printf("A%d", l);
		return;
	}
	printf("(");
	printf("l = %d , path[l][r]=%d",)
	print_path(l, path[l][r]);
	printf(" x ");
	print_path(path[l][r] + 1, r);
	printf(")");
}
int main(int argc, char **argv) {
	//freopen("a.in", "r", stdin);
	int cas = 1;
	while (scanf("%d", &n) > 0 && n) {
		for (int i = 0; i < n; ++i)
			scanf("%d%d", arr + i, arr + i + 1);
		/*for (int i = 0; i <= n; ++i)
			for (int j = 0; j <= n; ++j)
				dp[i][j] = -1;
		solve(1, n);
		printf("Case %d: ", cas++);
		print_path(1, n);
		puts("");*/

		int mem[12][12] = { };//Dynamic solution
		for (int l = 2; l <= n; ++l) {
			for (int i = 1; i <= n - l + 1; ++i) {
				int j = i + l - 1;
				mem[i][j] = 1e9;
				for (int k = i; k < j; ++k) {
					int tmp = mem[i][k] + mem[k + 1][j]
							+ arr[i - 1] * arr[j] * arr[k];
					if (tmp < mem[i][j]) {
						mem[i][j] = tmp;
						path[i][j] = k;
					}
				}
			}
		}
		printf("Case %d: ", cas++);
		print_path(1, n);
		puts("");
	}
	return 0;
}
