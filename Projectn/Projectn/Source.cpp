#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
	double P1, P2;
	int i, j;

	P1 = 1;
	i = 1;
	while (i <= 2)
	{
		P2 = 1;
		j = 1;

		while (j <= (4 - i))
		{
			P2 *= (sqrt(abs(tan(1. * i)))) / (1. * (i + pow(j, 2)));
			j++;
		}
		P1 *= P2;
		i++;
	}
	cout << P1 << endl;

	P1 = 1;
	i = 1;
	do {
		P2 = 1;
		j = 1;
		do {
			P2 *= (sqrt(abs(tan(1. * i)))) / (1.0 * (i + pow(j, 2)));
			j++;
		} while (j <= (4 - i));
		P1 *= P2;
		i++;
	} while (i <= 2);
	cout << P1 << endl;

	P1 = 1;
	for (i = 1; i <= 2; i++)
	{
		P2 = 1;
		for (j = 1; j <= (4 - i); j++)
		{
			P2 *= (sqrt(abs(tan(1. * i)))) / (1.0 * (i + pow(j, 2)));
		}
		P1 *= P2;
	}
	cout << P1 << endl;

	P1 = 1;
	for (i = 2; i >= 1; i--)
	{
		P2 = 1;
		for (j = (4 - i); j >= 1; j--)
		{
			P2 *= (sqrt(abs(tan(1. * i)))) / (1.0 * (i + pow(j, 2)));
		}
		P1 *= P2;
	}
	cout << P1 << endl;

	return 0;
}