#include <cmath>
#include <iostream>

using namespace std;
long long int power(long long int a, long long int b,
					long long int P)
{
	if (b == 1)
		return a;

	else
		return (((long long int)pow(a, b)) % P);
}
int main()
{
	long long int P, G, x, a, y, b, ka, kb;
    cout << "Enter a prime: ";
    cin >> P;
	G = 9;
	cout << "The value of G : " << G << endl;
    cout << "Enter Alice's key:";
    cin >> a;
	cout << "The private key a for Alice : " << a << endl;
	x = power(G, a, P);
	cout << "Enter Bob's key:";
    cin >> b;
	cout << "The private key b for Bob : " << b << endl;
	y = power(G, b, P);
	ka = power(y, a, P);
	kb = power(x, b, P);
	cout << "Secret key for the Alice is : " << ka << endl;
	cout << "Secret key for the Bob is : " << kb << endl;
	return 0;
}
