#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> vec;
    vector<int> prefixSum(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        vec.push_back(input);
        prefixSum[i + 1] = prefixSum[i] + vec[i];
    }

    for (int i = 0; i < m; i++)
    {
        int start, end;
        cin >> start >> end;

        int sum = prefixSum[end] - prefixSum[start - 1];
        cout << sum << "\n";
    }
}