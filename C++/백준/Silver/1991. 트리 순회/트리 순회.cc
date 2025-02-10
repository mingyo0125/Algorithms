#include <iostream>
#include <map>
using namespace std;

void Preorder(char ch);
void Inorder(char ch);
void Postorder(char ch);
map<char, pair<char, char>> node;

int main()
{
	int n;
	cin >> n;

	char lname, name, rname;

	for (int i = 0; i < n; i++)
	{
		cin >> name >> lname >> rname;
		node[name] = { lname, rname };
	}

	Preorder('A');
	cout << endl;
	Inorder('A');
	cout << endl;
	Postorder('A');
	cout << endl;

}

void Preorder(char ch)
{
	if (ch == '.') return;
	cout << ch;
	Preorder(node[ch].first);
	Preorder(node[ch].second);
}

void Inorder(char ch)
{
	if (ch == '.') return;
	Inorder(node[ch].first);
	cout << ch;
	Inorder(node[ch].second);
}

void Postorder(char ch)
{
	if (ch == '.') return;
	Postorder(node[ch].first);
	Postorder(node[ch].second);
	cout << ch;
}
