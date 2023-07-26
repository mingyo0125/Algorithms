#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;

	cin >> input;

	int counts[26] = { 0 };

	int maxCount = 0;
	int maxIndex = -1;

	bool isOverLap = false;

	for (int i = 0; i < input.length(); i++)
	{
		input[i] = toupper(input[i]);
	}

	for (char ch : input)
	{
		counts[ch - 'A']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (counts[i] > maxCount)
		{
			maxCount = counts[i];
			maxIndex = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (counts[i] == maxCount && i != maxIndex)
		{
			isOverLap = true;
			break;
		}
	}
	

	if (isOverLap)
	{
		cout << "?";
	}
	else
	{
		cout << (char)(maxIndex + 'A');
	}
}

