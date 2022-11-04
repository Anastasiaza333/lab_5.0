#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, F, c, a;
	cout << "xp = "; cin >> xp;cout << endl;
	cout << "xk = "; cin >> xk;cout << endl;
	cout << "dx = "; cin >> dx;cout << endl;
	cout << "a = "; cin >> a;cout << endl;
	cout << "c = "; cin >> c;cout << endl;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(6) << "x" << setw(6) << " |"
		<< setw(6) << "F" << setw(7) << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (c < 0 && a != 0)
			F = -a * x * x;
		else
			if (c > 0 && a == 0)
				F = (a - x) / (c * x);
			else
				F = x / c;

		cout << "|" << setw(10) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	system("pause");
	return 0;
}