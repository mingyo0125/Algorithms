#include <iostream>
using namespace std;

long Lcm(long a, long b)
{
    long tempA = a, tempB = b;
    while (tempB != 0)
    {
        long c = tempA % tempB;
        tempA = tempB;
        tempB = c;
    }
    return (a * b) / tempA;
}

int main()
{
    int A, B;
    cin >> A >> B;

    cout << Lcm(A, B);
}
