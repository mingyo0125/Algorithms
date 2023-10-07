#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, inputNum;
	string inputStr;
	queue<int> q;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> inputStr;

		if (inputStr == "push")
		{
			cin >> inputNum;
			q.push(inputNum);
		}
		else if (inputStr == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << "\n";
				q.pop();
			}
			else cout << -1 << "\n";

		}
		else if (inputStr == "size")
		{
			cout << q.size() << "\n";
		}
		else if (inputStr == "empty")
		{
			cout << q.empty() << "\n";
		}
		else if (inputStr == "front")
		{
			if (!q.empty()) cout << q.front() << "\n";
			else cout << -1 << "\n";
		}
		else if(inputStr == "back")
		{
			if (!q.empty()) cout << q.back() << '\n';
			else cout << -1 << "\n";
		}
	}
}