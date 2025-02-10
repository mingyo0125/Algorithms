#include <iostream>
#include <vector>

using namespace std;

vector<bool> visited(200, false);

void DFS(int a, vector<vector<int>> linked)
{
    visited[a] = true;

    for (int i = 0; i < linked.size(); i++)
    {
        if (!visited[i] && linked[i][a] == 1)
        {
            DFS(i, linked);
        }
    }
}

int solution(int n, vector<vector<int>> computers)
{
    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            DFS(i, computers);
            answer++;
        }
    }

    return answer;
}