#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int cc = 1; cc<=t; cc++)
	{
		double a1, d1, k1, a2, d2, k2;
		scanf("%lf%lf%lf", &a1, &d1, &k1);
		scanf("%lf%lf%lf", &a2, &d2, &k2);
		double s1, s2;
		s1 = ( (k1/2) * (2 * a1 + (k1-1)*d1) );
		//cout<<s1<<endl;
		s2 = ( (k2/2) * (2 * a2 + (k2-1)*d2) );
		//cout<<s2<<endl;
		double sum = s1 + s2;
		printf("Case %d: %.0lf\n", cc, sum);
	}
	return 0;
}

/**
2
1 1 10 15 -3 4
1 2 10 1000 500 3
A1, D1, K1, A2, D2 and K2.
Case 1: 97
Case 2: 4600
* */
