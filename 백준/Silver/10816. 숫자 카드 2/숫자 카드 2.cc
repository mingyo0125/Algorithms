#include <string>
#include <set>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, input;
    vector<int> vec;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;

        vec.push_back(input);
    }
    sort(vec.begin(), vec.end());
    
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> input;
        vector<int>::iterator lo = lower_bound(vec.begin(), vec.end(), input);
        vector<int>::iterator up = upper_bound(vec.begin(), vec.end(), input);
        int index = (up - vec.begin()) - (lo - vec.begin());
        cout << index << " ";
    }
}