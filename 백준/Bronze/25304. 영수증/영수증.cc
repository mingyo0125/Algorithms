#include <iostream>
using namespace std;

int main()
{
	int total;
	cin >> total;

	int num;
	cin >> num;

	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		int money;
		int count;
		cin >> money >> count;

		sum += money * count;
	}

	if (total == sum)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}