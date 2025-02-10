#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long Gcd(int a, int b)
{
    while (b != 0)
    {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < n - 1; i++)
    {
        vec[i] = vec[i + 1] - vec[i];
    }

    int gcd = vec[0];
    for (int i = 1; i < n - 1; i++)
    {
        gcd = Gcd(gcd, vec[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        cnt += (vec[i] / gcd) - 1;
    }

    cout << cnt;
}