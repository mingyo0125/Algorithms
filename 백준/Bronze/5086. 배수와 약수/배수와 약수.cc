#include <iostream>

using namespace std;

int main()
{
	int fir, sec;

	while (true)
	{
		cin >> fir >> sec;

		if (fir == 0 && sec == 0) { return 0; }
		 
		if (sec % fir == 0)
		{
			cout << "factor" << endl;
		}
		else if (fir % sec == 0)
		{
			cout << "multiple" << endl;
		}
		else
		{
			cout << "neither" << endl;
		}
	}
}
