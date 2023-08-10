#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int input;

	vector<int> divisors;
	vector<int> inputs;

	while (true)
	{
		cin >> input;
		inputs.push_back(input);
		if (input == -1) { break; }
	}

	for (int i = 0; i < inputs.size(); i++)
	{
		if (inputs[i] == -1) { return 0; }

		int temp = inputs[i];
		for (int i = 1; i <= temp; i++)
		{
			if (temp % i == 0 && i != temp)
			{
				divisors.push_back(i);
			}
		}

		for (int i = 0; i < divisors.size(); i++)
		{
			temp -= divisors[i];
		}

		if (temp == 0)
		{
			cout << inputs[i] << " = ";
			for (int j = 0; j < divisors.size() - 1; j++)
			{
				cout << divisors[j] << " + ";
			}
			cout << divisors[divisors.size() - 1] << endl;
		}

		else
		{
			cout << inputs[i] << " is NOT perfect." << endl;
		}

		divisors.clear();
	}
}