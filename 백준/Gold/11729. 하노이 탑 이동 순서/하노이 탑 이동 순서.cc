#include <iostream>
using namespace std;

void Hanoi(int n, int from, int to, int sec)
{
    if (n == 1)
    {
        cout << from << " " << to << "\n";
        return;
    }

    Hanoi(n - 1, from, sec, to);
    cout << from << " " << to << "\n";
    Hanoi(n - 1, sec, to, from);
}

int main()
{
    int n;
    cin >> n;

    cout << (1 << n) - 1 << "\n";

    Hanoi(n, 1, 3, 2);
}
