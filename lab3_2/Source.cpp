#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	double a;
	double b;
	double c;
	double x;
	double F;
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	
	// short form:
	if (x - 1 < 0 && b - x != 0)
		F = a * pow(x, 2) + b;
	if ((x - 1 > 0) && (b + x == 0))
		F = (x - a) / x;
	if (!(x - 1 < 0 && b - x != 0) && !((x - 1 > 0) && (b + x == 0)))
		F = x / c;
	
	cout << endl;
	cout << "1) F = " << F << endl;
	
	// full form:
	
	if (x - 1 < 0 && b - x != 0)
		F = a * pow(x, 2) + b;
	else
		if ((x - 1 > 0) && (b + x == 0))
			F = (x - a) / x;
		else
			F = x / c;
	
	cout << "2) F = " << F << endl;
	
	cin.get();
	return 0;
}