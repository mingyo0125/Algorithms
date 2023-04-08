#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int* sum = new int[t];
	int cnt = 0;

	int* a = new int[t];
	int* b = new int[t];
	for (int i = 0; i < t; i++)
	{
		cin >> a[i] >> b[i];
		sum[i] = a[i] + b[i];

		
	}

	for (int i = 0; i < t; i++)
	{
		cnt++;
		cout << "Case #" << cnt << ": " << a[i] << " + " << b[i] << " = " << sum[i] << endl;
	}
}