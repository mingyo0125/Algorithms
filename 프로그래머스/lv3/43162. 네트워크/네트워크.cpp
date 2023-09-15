#include <iostream>
#include <vector>

using namespace std;

vector<bool>visited(200, false);

void DFS(int n, int v, vector<vector<int>>linked)
{
    visited[v] = true;

    for (int i = 0; i < linked.size(); i++)
    {
        if (!visited[i] && linked[v][i] == 1)
        {   
            DFS(n,i,linked);
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
            DFS(n, i, computers);
            answer++;
        }
    }
    return answer;
}