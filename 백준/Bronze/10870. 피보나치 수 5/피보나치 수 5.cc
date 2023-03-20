#include <iostream>
using namespace std;

int Pibo(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 0)
	{
		return 0;
	}
	return Pibo(n - 1) + Pibo(n - 2);
}

int main()
{
	int a;
	cin >> a;
	cout << Pibo(a);

}