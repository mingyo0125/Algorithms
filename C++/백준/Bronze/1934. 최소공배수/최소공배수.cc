#include <iostream>
#include <vector>
using namespace std;

vector<int> lcms;

void Lcm(int a, int b)
{
    int tempA = a, tempB = b;
    while (tempB != 0)
    {
        int c = tempA % tempB;
        tempA = tempB;
        tempB = c;
    }
    lcms.push_back(a * b / tempA);
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        Lcm(a, b);
    }

    for (int i = 0; i < lcms.size(); i++)
    {
        cout << lcms[i] << endl;
    }
}