#include <string>
#include <vector>
#include <algorithm>
#define longlong long long

using namespace std;

longlong solution(int n, vector<int> times) {
    sort(times.begin(), times.end());
    longlong left = times.front(), right = (longlong)times.front() * n; // 탐색 범위 정하기
    longlong time, people;
    while (left <= right)
    {
        people = 0;
        time = (left + right) / 2;
        for (auto t : times)
            people += time / t; // 주어진 시간에서 채울 수있는 사람 수 구하기

        if (people >= n)
        {
            right = time - 1;
        }
        else
        {
            left = time + 1;
        }
        // 주어진 시간에서 n명을 채우기 어렵다면
    }
    return left;
}