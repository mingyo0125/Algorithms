	#include <iostream>
	#include <string>
	using namespace std;

	int main()
	{
		int iInput2;
		cin >> iInput2;

		for (int n = 0; n < iInput2; n++)
		{
			int iInput;
			cin >> iInput;
			string sInput;
			cin >> sInput;

			for (int i = 0; i < sInput.length(); i++)
			{
				for (int j = 0; j < iInput; j++)
				{
					cout << sInput[i];
				}
			}
			cout << endl;
		}
		
	}