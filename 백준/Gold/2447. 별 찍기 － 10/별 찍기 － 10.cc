#include <iostream>
using namespace std;

void DrawStar(int x, int y, int num)
{
    if (x % 3 == 1 && y % 3 == 1)
    {
        cout << " ";
        return;
    }
    else
    {
        if (num / 3 == 0)
        {
            cout << "*";
            return;
        }

        DrawStar(x / 3, y / 3, num / 3);
    }
}


int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            DrawStar(i,j,n);
        }
        cout << "\n";
    }
}