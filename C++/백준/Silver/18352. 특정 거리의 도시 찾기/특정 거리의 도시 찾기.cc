#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M, K, X;

	cin >> N >> M >> K >> X;

	vector<int> visited;
	vector<int> answer;
	vector<vector<int>> linked;
	
	queue<int> q;

	linked.resize(N + 1);
	visited.resize(N + 1, -1);

	q.push(X);
	visited[X] = 0;

	int n1, n2;

	for (int i = 0; i < M; i++)
	{
		cin >> n1 >> n2;
		linked[n1].push_back(n2);
	}

	while (!q.empty())
	{
		int now = q.front();
		q.pop();

		for (int i = 0; i < linked[now].size(); i++)
		{
			int next = linked[now][i];

			if (visited[next] == -1)
			{
				q.push(next);
				visited[next] = visited[now] + 1;

				if (visited[next] == K) answer.push_back(next);
			}
		}
	}

	sort(answer.begin(), answer.end());
	if (answer.empty()) cout << -1;
	else
	{
		for (auto n : answer)
		{
			cout << n << "\n";
		}
	}
}
