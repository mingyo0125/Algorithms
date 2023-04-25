#include <iostream>
using namespace std;

int main()
{
	int count[42] = {};
	int v;
	int result = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> v;
		// 입력 받은 수를 42로 나눈 나머지 인덱스의 값을 증가시킨다.
		count[v % 42]++;
	}
	/*
	  배열을 순회하면서 적어도 한 번 이상 나온 경우에는
	  result 값을 증가시킨다. (서로 다른 수를 세기 위함)
	 */
	for (int v : count)
	{
		if (v > 0)
		{
			result++;
		}
	}
	cout << result;
}