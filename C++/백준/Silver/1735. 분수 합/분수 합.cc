#include <iostream>
using namespace std;

long Gcd(int a, int b)
{
    while (b != 0)
    {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    int denominator, numerator;
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    denominator = b * d;
    numerator = (a * d) + (c * b);

    int min = Gcd(numerator, denominator);
    denominator /= min;
    numerator /= min;

    cout << numerator << " " << denominator;
}