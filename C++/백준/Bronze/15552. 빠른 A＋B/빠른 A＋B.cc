#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}
}