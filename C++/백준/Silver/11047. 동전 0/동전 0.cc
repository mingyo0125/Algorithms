#include <iostream>
#include <vector>
using namespace std;
#define longlong long long

int main()
{
    int n, k, input, cnt = 0;
    cin >> n >> k;
    vector<int> coins;

    for (int i = 0; i < n; i++)
    {
        cin >> input;

        coins.push_back(input);
    }

    for (int i = coins.size() - 1; i >= 0; i--)
    {
        if (coins[i] > k) { continue; }

        cnt += k / coins[i];
        k %= coins[i];
    }

    cout << cnt;
}