#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string input;
	cin >> input;

	int n;

	cin >> n;

	int sum = 0;

	for (int i = 0; i < input.length(); i++)
	{
		int temp = input[input.length() - (i + 1)];

		if ('0' <= temp && temp <= '9')
		{
			temp = temp - '0';
		}
		else
		{
			temp = temp + 10 - 'A';
		}

		sum += (temp * (int)pow(n, i));
	}

	cout << sum;
}
