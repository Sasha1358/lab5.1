// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double t(const double x); // прототип
int main()
{
	double z;
		cout << "z = "; cin >> z;
	double c = (t(1) + t(1) * t(t(1)) + t(1) * t(t(1)))/(1 + sqrt(t(z + 1 + sqrt(t(z)))));
	cout << "c = " << c << endl;
	return 0;
}
double t(const double x) // визначення
{
	return 1 + sqrt(1 + x * x) ;
}