#include <iostream>
using namespace std;

int main()
{
	int h, m, p;
	cin >> h >> m >> p;
	int cnt = 0;

	m += p;
	while (true)
	{
		if (h >= 24)
		{
			h = 0;
		}

		if (m >= 60)
		{
			cnt = 0;
			m = m - 60;
			cnt++;
			h += cnt;
		}
		else
		{
			break;
		}

	}
	
	cout << h << " " << m;
}