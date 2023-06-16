#include <iostream>
#include<map>
using namespace std;

int main()
{
	map<string, int> book;
	int len, max = 0;;
	string res,str;
	cin >> len;

	for (int i = 0; i < len; i++)
	{
		cin >> str;
		book[str]++;
	}

	for (auto curBook : book)
	{
		if (curBook.second > max)
		{
			max = curBook.second;
			res = curBook.first;
		}
	}
	cout << res;
}