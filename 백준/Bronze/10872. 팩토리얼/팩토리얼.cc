	#include <iostream>
	using namespace std;

	int Pac(int n)
	{
		if (n == 0)
		{
			return 1;
		}
		return n * Pac(n - 1);
	}

	int main()
	{
		int a;
		cin >> a;
		cout << Pac(a);

	}