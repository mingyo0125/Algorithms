#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int A = 0, B = 0, C = 0;
	A = a * (b % 10);
	B = a * (b - ((b % 10) + (b / 100) * 100)) / 10;
	C = a * (b / 100);
	cout << A << endl;
	cout << B << endl;
	cout << C << endl;
	cout << A + B * 10 + C * 100;
	
}