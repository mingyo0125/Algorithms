#include <iostream>
using namespace std;

int main() 
{
    int t, n, k;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;

        int result = 1, temp = 1;

        for (int j = k; j > k - n; j--)
        {
            result = result * j;
            result = result / temp;
            temp++;
        }

        cout << result << endl;
    }
}   