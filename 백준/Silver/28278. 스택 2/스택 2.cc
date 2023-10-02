#include <iostream>
#include <stack>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> st;

    int n, x, input;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input == 1)
        {
            cin >> x;
            st.push(x);
        }
        else if (input == 2)
        {
            if (st.empty())
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << st.top() << "\n";
                st.pop();
            }
        }
        else if (input == 3)
        {
            cout << st.size() << "\n";
        }
        else if (input == 4)
        {
            if (st.empty())
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if (input == 5)
        {
            if (st.empty())
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << st.top() << "\n";
            }
        }
    }
}