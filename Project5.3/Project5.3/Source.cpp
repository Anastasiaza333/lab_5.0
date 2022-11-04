#include <iostream>
#include <cmath>
using namespace std;
double s(const double x);
int main()
{
	double rp, rk, r,result;
	int num;// number of intervals
	cout << "Enter rp:"; cin >> rp;
	cout << "Enter rk : "; cin >> rk;
	cout << "Enter num : "; cin >> num;
	double dr = (rk - rp) / num;
	double r = rp;
	while (r <= rk)
	{
		result = s(sqrt(r)+1) + pow(s(sqrt(r)-1), 2);
		cout << "r:" << r  <<""<<"Result:"<< result << endl;
		r += dr;
	}
	return 0;
}
double s(const double x)
{
	if (abs(x) >= 1)
		return (1+x*x+sqrt(abs(sin(x)))/ 1.*sin(2*x*x)*sin(2*x*x)+1);
	else
	{
		double S = 0;
		int i = 0;
		double a =1;
		S = a;
		do
		{
			i++;
			double R =x*1./i ;
			a *= R;
			S += a;
		} while (i<=5);
		return S;
		
		{
			double S = 0;
			int k = 1;
			double a = x;
			S = a;
			do
			{
				k++;
				double R = x*1. / k;
				a *= R;
				S += a;
			} while (k <= 6);
			return S;
		}
}