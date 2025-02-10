#include <iostream>
#include <string>

using namespace std;

int main()
{
	char alpha[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	string input;

	cin >> input;

	for (int i = 0; i < 26; i++)
	{
		int pos = input.find(alpha[i]);
		cout << pos << " ";
	}
}
