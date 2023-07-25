#include <iostream>
using namespace std;

int main()
{
	int input;

	cin >> input;

	for (int i = 1; i <= input; i++)
	{
		for (int j = 0; j < input - i; j++)
		{
			cout << " ";
		}

		for (int k = 1; k <= 2 * i - 1; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 1; i <= input - 1; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}

		for (int k = (input - i) * 2 - 1; k > 0; k--)
		{
			cout << "*";
		}


		cout << "\n";
	}

}

