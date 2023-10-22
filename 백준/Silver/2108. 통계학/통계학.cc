#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    vector<int> vec;
    map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
        sum += num;
        map[num]++;
    }

    double mean = (double)sum / n;
    if (abs(round(mean)) == 0) { cout << 0 << endl; }
    else { cout << round(mean) << endl; }

    sort(vec.begin(), vec.end());
    int median = vec[n / 2];
    cout << median << endl;

    int mode = vec[0];
    int maxFrequency = 0;
    for (const auto& pair : map)
    {
        if (pair.second > maxFrequency)
        {
            mode = pair.first;
            maxFrequency = pair.second;
        }
    }

    vector<int> modes;
    for (const auto& pair : map)
    {
        if (pair.second == maxFrequency)
        {
            modes.push_back(pair.first);
        }
    }
    sort(modes.begin(), modes.end());
    cout << (modes.size() > 1 ? modes[1] : mode) << endl;

    int range = vec[n - 1] - vec[0];
    cout << range << endl;

}