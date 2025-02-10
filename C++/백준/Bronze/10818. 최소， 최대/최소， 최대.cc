#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;

    int arr[1000000];

    cin >> a;
    

    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        arr[i] = b;
    }

    int max = arr[0];
    int min = arr[0];


    for (int i = 0; i < a; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }

        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }

    cout << min << " " << max;
}

