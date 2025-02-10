#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;

	cin >> input;

	char reverse[100] = {0};

	for (int i = 0; i < input.length(); i++)
	{
		reverse[i] = input[input.length() - i - 1];
	}

	for (int i = 0; i <= input.length(); i++)
	{
		if (reverse[i] != input[i])
		{
			cout << "0";
			return 0;
		}
	}

	cout << "1";

}

