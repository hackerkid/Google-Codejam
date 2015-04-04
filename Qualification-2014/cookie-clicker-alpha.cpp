#include <iostream>
#include <stdio.h>
using namespace std;

double cost;
double k;
double target;

double wow( double target, double r)
{
	double x;
	double y;

	if(cost / r + target/(r+k) > target / r) {
		return target / r;
	}

	x = cost / r + wow(target, r + k);
	y = target / r;

	return min(x, y);


}

int main()
{

	int t;
	double ans;

	cin >> t;

	for (int cases = 1; cases <= t; cases++) {
		scanf("%lf", &cost);
		scanf("%lf", &k);
		scanf("%lf", &target);
		ans = wow(target, 2);
		printf("Case #%d: %.7lf\n",cases, ans);

	}

}
