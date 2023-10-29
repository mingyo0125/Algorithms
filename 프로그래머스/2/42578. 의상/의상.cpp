#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes)
{
	unordered_map<string, int> um;

	for (int i = 0; i < clothes.size(); i++)
	{
		um[clothes[i][1]]++;
	}

	int sum = 1;

	for (auto m : um)
	{
		sum *= (m.second + 1);
	}

	return sum - 1;
}