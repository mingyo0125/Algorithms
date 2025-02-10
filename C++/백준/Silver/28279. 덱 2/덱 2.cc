#include <iostream>
#include <deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k, input;
	cin >> n;
	deque<int> deq;

	for (int i = 0; i < n; i++)
	{
		cin >> k;
		switch (k)
		{
		case 1:
			cin >> input;
			deq.push_front(input);
			break;
		case 2:
			cin >> input;
			deq.push_back(input);
			break;
		case 3:
			if (deq.empty()) { cout << -1 << "\n"; }
			else
			{
				cout << deq.front() << "\n";
				deq.pop_front();
			}
			break;
		case 4:
			if (deq.empty()) { cout << -1 << "\n"; }
			else
			{
				cout << deq.back() << "\n";
				deq.pop_back();
			}
			break;
		case 5:
			cout << deq.size() << "\n";
			break;
		case 6:
			if (deq.empty()) { cout << 1 << "\n"; }
			else { cout << 0 << "\n"; }
			break;
		case 7:
			if (deq.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << deq.front() << "\n";
			}
			break;
		case 8:
			if (deq.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << deq.back() << "\n";
			}
			break;
		}
	}
}