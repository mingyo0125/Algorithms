#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int input;

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

		vector<int> divisors;

		int temp = inputs[i];
		for (int j = 1; j <= temp; j++)
		{
			if (temp % j == 0 && j != temp)
			{
				divisors.push_back(j);
			}
		}

		for (int j = 0; j < divisors.size(); j++)
		{
			temp -= divisors[j];
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

	}
}