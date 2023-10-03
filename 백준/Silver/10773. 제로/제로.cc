#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    int n, sum = 0;
    cin >> n;

    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;

        if (input == 0)
        {
            st.pop();
            continue;
        }
        st.push(input);
    }

    while (st.size() > 0)
    {
        sum += st.top();
        st.pop();
    }

    cout  << sum;
}