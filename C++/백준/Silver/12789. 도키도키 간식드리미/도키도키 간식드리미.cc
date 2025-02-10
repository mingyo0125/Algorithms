#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> st;
	int n, input, cnt = 1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;

		if (input == cnt) cnt++;
		else st.push(input);

		while (!st.empty() && st.top() == cnt)
		{
			st.pop();
			cnt++;
		}
	}

	if (st.empty()) cout << "Nice";
	else cout << "Sad";
}