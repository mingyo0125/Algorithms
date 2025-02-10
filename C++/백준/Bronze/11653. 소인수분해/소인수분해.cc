#include <iostream>
using namespace std;

int main()
{
	int input;

	cin >> input;

	for (int i = 2; i <= input;)
	{
		if (input % i == 0)
		{
			cout << i << endl;
			input /= i;
		}
		else
		{
			i++;
		}
	}
}