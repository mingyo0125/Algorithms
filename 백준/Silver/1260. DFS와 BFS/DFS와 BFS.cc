#include <iostream>
#include <queue>
using namespace std;

int n, m, v;
int map[1001][1001];
bool visited[1001];
queue<int> q;

void reset()
{
	for (int i = 0; i < 1001; i++)
	{
		visited[i] = 0;
	}
}

void BFS(int a)
{
	visited[a] = true;
	q.push(a);

	cout << a << " ";

	while (!q.empty())
	{
		int f = q.front();
		q.pop();
		for (int i = 1; i <= n; i++)
		{
			if (!visited[i] && map[i][f] == 1)
			{
				visited[i] = true;
				q.push(i);

				cout << i << " ";
			}
		}
	}
}

void DFS(int a)
{
	visited[a] = true;

	cout << a << " ";

	for (int i = 1; i <= n; i++)
	{
		if (!visited[i] && map[a][i] == 1)
		{
			DFS(i);
		}
	}
}


int main()
{
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;

		map[a][b] = 1;
		map[b][a] = 1;
	}

	reset();
	DFS(v);

	cout << endl;

	reset();
	BFS(v);
}