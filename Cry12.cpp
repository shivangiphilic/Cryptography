#include <bits/stdc++.h>
using namespace std;

int Euclid(int a, int b, int *x, int *y)
{
	if (a == 0)
	{
		*x = 0;
		*y = 1;
		return b;
	}

	int x1, y1;
	int gcd = Euclid(b%a, a, &x1, &y1);
	*x = y1 - (b/a) * x1;
	*y = x1;

	return gcd;
}

int main()
{
	int x, y, a = 20, b = 10;
	int g = Euclid(a, b, &x, &y);
	cout << "GCD of " << a << " and " << b << " is: " << g << "\n";
	return 0;
}
