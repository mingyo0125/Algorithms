	#include <iostream>
	using namespace std;

	int main()
	{
		int index;
		cin >> index;
		int sum = 0, num = 0;
	
		char input;

		for (int i = 0; i < index; i++)
		{
			cin >> input;
			num = input - '0';
			sum += num;
		}
		cout << sum;
	}