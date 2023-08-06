#include <iostream>

using namespace std;

int main()
{
    int input;
	cin >> input;

	int cnt = 1;

	while (input > cnt)
	{
		input -= cnt;
		cnt++;
	}

	if (cnt % 2 == 1) cout << cnt + 1 - input << "/" << input;
	else cout << input << "/" << cnt + 1 - input;
}
