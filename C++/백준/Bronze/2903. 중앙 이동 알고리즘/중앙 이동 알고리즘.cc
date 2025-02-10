#include <iostream>
#include <string>

using namespace std;

int main()
{
	int input;

	cin >> input;

	int sum = 2;

	for (int i = 1; i <= input; i++)
	{
		sum += (sum - 1);
	}

	sum *= sum;

	cout << sum;

}
