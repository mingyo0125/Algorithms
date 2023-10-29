#include <iostream>
using namespace std;

void Hanoi(int n, int to, int from, int sec)
{
    if (n == 1)
    {
        cout << to << " " << from << "\n";
        return;
    }

    Hanoi(n - 1, to, sec, from);
    cout << to << " " << from << "\n";
    Hanoi(n - 1, sec, from, to);
}

int main()
{
    int n;
    cin >> n;

    cout << (1 << n) - 1 << "\n";

    Hanoi(n, 1, 3, 2);
}