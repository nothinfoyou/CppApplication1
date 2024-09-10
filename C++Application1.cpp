#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int num1;
	cout << "Enter the number of the question you would like to see (4 or 5): ";
	cin >> num1;
	switch (num1) {
	default:
		break;
	case 4:
		double a, b, c;
		double x, y, z, avg, max_val, min_val;
		cout << "Enter the values for a, b, and c: " << endl;
		cin >> a >> b >> c;
		x = (-b + sqrt((b * b) + (4 * a))) / (2 * c);
		y = (pow(a, 4) - (b * pow(c, 2)));
		z = ((pow(a, 2)) * (pow(b, 3))) / c;
		avg = (x + y + z) / 3;
		max_val = max({ x, y, z });
		min_val = min({ x, y, z });
		cout << "X: " << x << endl;
		cout << "Y: " << y << endl;
		cout << "Z: " << z << endl;
		cout << "Average: " << avg << endl;
		cout << "Max: " << max_val << endl;
		cout << "Min: " << min_val << endl;
		break;
	case 5:
		cout << "testing";
		break;
	}
}

