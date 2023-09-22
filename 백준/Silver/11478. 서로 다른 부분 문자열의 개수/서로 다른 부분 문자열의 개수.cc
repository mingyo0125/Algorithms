#include <iostream>
#include <set>
using namespace std;

int main()
{
    string input;
    cin >> input;
    set<string> set;

    string str = "";

    for (int i = 0; i < input.size(); i++)
    {
        for (int j = i; j < input.size(); j++)
        {
            str += input[j];
            set.insert(str);
        }
        str = "";
    }

    cout << set.size();
}
