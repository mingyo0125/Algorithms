#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n;

	cin >> n;
	string input;

	for (int i = 0; i < n; ++i)
	{
		stack<char> st;
		cin >> input;

		for (int j = 0; j < input.size(); j++)
		{
			if (st.empty() || input[j] == '(') st.push(input[j]);
			else if (st.top() == '(') st.pop();
		}

		if (st.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}