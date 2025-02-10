#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, rt = 0, cnt = 0;

	while (cin >> n)
	{
		if (n == 0) break;

		for (int i = n + 1; i <= 2 * n; i++)
		{
			rt = sqrt(i);

			if (rt == 1 && i != 1)
			{	
				cnt++;
				continue;
			}
			if (i % 2 != 0)
			{	
				for (int j = 2; j <= rt; j++)
				{
					if (i % j == 0) break;
						
					if (j == rt) cnt++;
				}
			}
		}
		cout << cnt << "\n";
		cnt = 0; 
	}
}