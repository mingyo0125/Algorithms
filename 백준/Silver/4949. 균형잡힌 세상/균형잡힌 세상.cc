#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string input;
	while (true)
	{
		getline(cin, input);
		stack<char> st;
		if (input[0] == '.') break;

		for (int i = 0; i < input.length() - 1; i++)
		{
			if (input[i] == '(') st.push('(');
			if (input[i] == '[') st.push('[');

			if (input[i] == ')')
			{
				if (!st.empty() && st.top() == '(') { st.pop(); }
				else
				{
					cout << "no" << endl;
					break;
				}
			}

			if (input[i] == ']')
			{
				if (!st.empty() && st.top() == '[') { st.pop(); }
				else
				{
					cout << "no" << endl;
					break;
				}
			}

			if (st.empty() && i == input.length() - 2) cout << "yes" << endl;
			else if (!st.empty() && i == input.length() - 2) cout << "no" << endl;
		}

	}
}