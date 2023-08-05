#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 1;
    int cnt = 1;

    while (n > sum)
    {
        sum += (6 * cnt);
        cnt++;
    }

    cout << cnt;

}