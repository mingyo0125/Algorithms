#include <iostream>
using namespace std;

int arr[1000001];

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    for (int i = 2; i <= 1000001; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i * i <= 1000001; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        for (int j = i * i; j <= 1000001; j += i)
        {
            arr[j] = 0;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int cnt(0);
        for (int i = 2; i < n; i++)
        {
            if (arr[n - i] + arr[i] == n)
            {
                cnt++;
                if (n - i == i)
                {
                    cnt++;
                }
            }
        }
        cout << cnt / 2 << "\n";
    }
}