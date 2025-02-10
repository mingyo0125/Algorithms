#include <iostream>
using namespace std;

int main() 
{
    int t, n, min = 1000000, max = 0;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        min = min > n ? n : min;
        max = max < n ? n : max;
    }

    cout << min * max;
}   