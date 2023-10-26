#include <iostream>
using namespace std;

int Pibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return Pibo(n - 1) + Pibo(n - 2);
}

int main()
{
    int n;

    cin >> n;

    cout << Pibo(n);
}
