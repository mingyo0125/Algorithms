#include <iostream>
using namespace std;

int Pac(int n, int k)
{
    if (k == 0 || n == k)
    {
        return 1;
    }

    return Pac(n - 1, k) + Pac(n - 1, k - 1);
}

int main() 
{
    int n, k;
    cin >> n >> k;
    cout << Pac(n, k);
}   