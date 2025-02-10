#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int* sum = new int[t];
	for (int i = 0; i < t; i++)
	{
		int a, b;
		cin >> a >> b;
		sum[i] = a + b;
	}

	for (int i = 0; i < t; i++)
	{
		cout << sum[i] << endl;
	}
}