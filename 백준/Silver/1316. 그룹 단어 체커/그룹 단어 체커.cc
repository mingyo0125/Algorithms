#include <iostream>
#include <string>

using namespace std;

int main()
{
    int inputNum = 0;

    cin >> inputNum;

    int cnt = 0;

    for (int i = 0; i < inputNum; i++)
    {
        string input;

        cin >> input;

        bool isGroup = true;

        for (int j = 0; j < input.length(); j++)
        {
            for (int k = j + 2; k < input.length(); k++)
            {
                if (input[j] == input[k] && input[j] != input[j + 1])
                {
                    isGroup = false;
                    break;
                }
            }
        }

        if (isGroup)
        {
            cnt++;
        }
    }

    cout << cnt;
}
