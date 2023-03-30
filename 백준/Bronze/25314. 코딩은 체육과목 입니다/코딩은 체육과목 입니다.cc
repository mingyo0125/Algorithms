#include <iostream>
using namespace std;

int main()
{
	int input;
	int cnt = 0;
	cin >> input;

	while (true)
	{
		input = input - 4;
		cnt++;
		if (input == 0)
		{
			break;
		}
	}

	for (int i = 0; i < cnt; i++)
	{
		cout << "long ";
	}
	cout << "int";
}