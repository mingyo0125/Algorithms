#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int num;

	cin >> num;

	vector<string> output;

	for (int i = 0; i < num; i++)
	{
		int quarter = 0;
		int dime = 0;
		int nickel = 0;
		int penny = 0;

		int money;
		cin >> money;

		if (money % 25 >= 0)
		{
			quarter = money / 25;
			money -= 25 * quarter;
		}
		if(money % 10 >= 0)
		{
			dime = money / 10;
			money -= 10 * dime;
		}
		if (money % 5 >= 0)
		{
			nickel = money / 5;
			money -= 5 * nickel;
		}

		penny = money / 1;

		output.push_back(to_string(quarter) + ' ' + to_string(dime) + ' ' + to_string(nickel) + ' ' + to_string(penny));
	}

	for (int i = 0; i < num; i++)
	{
		cout << output[i] << endl;
	}

}
