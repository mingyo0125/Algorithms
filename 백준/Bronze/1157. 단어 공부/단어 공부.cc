#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;

	cin >> input;

	int alphaCounts[26] = { 0 };

	int maxCount = 0;
	int maxIndex = -1;

	bool isOverLap = false;

	for (int i = 0; i < input.length(); i++)
	{
		input[i] = toupper(input[i]);
	}

	for (char ch : input)
	{
		alphaCounts[ch - 'A']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alphaCounts[i] > maxCount)
		{
			maxCount = alphaCounts[i];
			maxIndex = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (alphaCounts[i] == maxCount && i != maxIndex)
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
