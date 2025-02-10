#include <iostream>
using namespace std;

long long Pac(long long n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * Pac(n - 1);
}

int main()
{
    int input;
    cin >> input;
    cout << Pac(input);
}