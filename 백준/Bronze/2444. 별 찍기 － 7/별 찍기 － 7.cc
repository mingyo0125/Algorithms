#include <iostream>
using namespace std;

int main()
{
	int input;

	cin >> input;

	for (int i = 1; i <= input; i++)			// 몇단 삼각형인지
	{
		for (int j = 0; j < input - i; j++)		// 삼각형 앞에 오는 공백 출력
		{
			cout << " ";
		}

		for (int k = 1; k <= 2 * i - 1; k++)		// 삼각형을 이루는 별 출력
		{
			cout << "*";
		}

		cout << "\n";
	}

	for (int i = 1; i <= input; i++)			// 몇단 삼각형인지(역삼각형)
	{
		for (int j = 1; j <= i; j++)			// 삼각형 앞에 오는 공백 출력(역삼각형)
		{
			cout << " ";
		}

		for (int k = (input - i) * 2 - 1; k > 0; k--)   // 삼각형을 이루는 별 출력(역삼각형)
		{
			cout << "*";
		}

		cout << "\n";
	}

}

