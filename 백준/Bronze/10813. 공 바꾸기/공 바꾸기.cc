#include <iostream>

using namespace std;

int main()
{
    int arr[100];

    int n;

    cin >> n;

    int m;
    
    cin >> m;

    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }


    for (int i = 0; i < m; i++)
    {
        int a, b;

        cin >> a >> b;

        swap(arr[a], arr[b]);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }

}

