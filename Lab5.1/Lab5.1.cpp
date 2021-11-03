#include <iostream>
#include <cmath>

using namespace std;

double f(const double a, const double b, const double c);

int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double z = (f(t,s,2) + (f(1,s + t,t - s)) / (1 + pow(f(1,1,t*t + s*s),2)));

	cout << "z = " << z << endl;

	return 0;
}
double f(const double a, const double b, const double c)
{
	return ((a + b + c) / (sin(a*b + c*c) * sin(a*b + c*c)));
}
