#include <string>
#include <vector>
#include <algorithm>
#define longlong long long
using namespace std;

long long solution(int n, vector<int> times)
{
	sort(times.begin(), times.end());

	longlong left = times.front(), right = (long long)times.front() * n; //가장 적게 걸리는 한 사람이 모두 하는 경우
	longlong time, people;
	while (left <= right)
	{
		people = 0;
		time = (left + right) / 2;
		for(auto t: times)
		{
			people += time / t;
		}

		if (people >= n)
		{
			right = time - 1;
		}
		else
		{
			left = time + 1;
		}
	}
	return left;
}
int main()
{
}