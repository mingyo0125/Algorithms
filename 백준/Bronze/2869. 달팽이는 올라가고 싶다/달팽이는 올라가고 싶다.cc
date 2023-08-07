#include <iostream>

using namespace std;

int main()
{
	int day;
	int night;
	int height;

	cin >> day >> night >> height;

	cout << (height - night - 1) / (day - night) + 1;
}
