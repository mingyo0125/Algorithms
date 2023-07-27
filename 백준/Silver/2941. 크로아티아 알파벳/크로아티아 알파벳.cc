#include <iostream>
#include <string>

using namespace std;

int main()
{
    string croatiaAlpha[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

    string input;
    cin >> input;

    int cnt = 0;
    int pos = 0;

    while (pos < input.length())
    {
        bool isCroatianLetter = false;
        for (string curAlpha : croatiaAlpha)
        {
            if (input.substr(pos, curAlpha.length()) == curAlpha)
            {
                cnt++;
                pos += curAlpha.length();
                isCroatianLetter = true;
                break;
            }
        }

        if (!isCroatianLetter)
        {
            cnt++;
            pos++;
        }
    }

    cout << cnt;
}
