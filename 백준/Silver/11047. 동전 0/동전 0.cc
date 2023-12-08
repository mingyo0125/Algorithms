#include <iostream>
#include <vector>
using namespace std;
#define longlong long long

int main()
{
    longlong n, k, input, cnt = 0;
    cin >> n >> k;
    vector<longlong> coins;

    for (longlong i = 0; i < n; i++)
    {
        cin >> input;

        coins.push_back(input);
    }

    for (longlong i = coins.size() - 1; i >= 0; i--)
    {
        if (coins[i] > k) { continue; }

        cnt += k / coins[i];
        k %= coins[i];
    }

    cout << cnt;
}