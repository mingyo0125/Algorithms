#include <iostream>
#include <string>

using namespace std;

int main()
{
    string croatiaAlpha[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

    string input;
    cin >> input;

    int cnt = 0;
    int curPos = 0;

    while (curPos < input.length())
    {
        bool isCroatianLetter = false;
        for (string curLetter : croatiaAlpha)
        {
            if (input.substr(curPos, curLetter.length()) == curLetter)
            {
                cnt++;
                curPos += curLetter.length();
                isCroatianLetter = true;
                break;
            }
        }

        if (!isCroatianLetter)
        {
            cnt++;
            curPos++;
        }
    }

    cout << cnt;
}
