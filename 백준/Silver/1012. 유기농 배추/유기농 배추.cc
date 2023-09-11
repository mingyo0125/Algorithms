#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
bool visited[51][51] = {0};
int board[51][51] = {0};

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0,-1, 0, 1 };

void DFS(int x, int y, int m, int n)
{
	visited[x][y] = true;
	
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= m || ny < 0 || ny >= n)
			continue;

		if (!visited[nx][ny] && board[nx][ny] == 1)
		{
			DFS(nx, ny, m, n);
		}
	}
}

int main()
{
	int testcase;
	cin >> testcase;

	while (testcase--)
	{
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);

		int cnt = 0;

		int x, y, num;

		cin >> x >> y >> num;

		for (int i = 0; i < num; i++)
		{
			int inputx, inputy;

			cin >> inputx >> inputy;

			board[inputx][inputy] = 1;
		}

		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				if (!visited[i][j] && board[i][j] == 1)
				{
					DFS(i, j,x, y);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}
