#include <iostream>
using namespace std;

int Pac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * Pac(n - 1);
}

int main() 
{
    int n;
    cin >> n;
    cout << Pac(n);
}   
