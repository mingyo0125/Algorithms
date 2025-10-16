#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a,b,c, sum = 0;

    scanf("%d %d %d", &a, &b, &c);

    bool isABEqual = a == b;
    bool isACEqual = a == c;
    bool isBCEqual = b == c;

    bool isTwiceEqual = isABEqual || isACEqual || isBCEqual;
    bool isThirdEqual = isABEqual && isACEqual;

    if(isTwiceEqual)
    {
        if(isThirdEqual)
        {
            sum = 10000 + a * 1000;
        }
        else
        {
            if(isBCEqual)
            {
                sum = 1000 + b * 100;
            }
            else
            {
                sum = 1000 + a * 100;
            }
        }
    }
    else
    {
        int maxNum = 0;
        if(a >= b && a >= c)
        {
            maxNum = a;
        }
        else if(b >= a && b >= c)
        {
            maxNum = b;
        }
        else
        {
            maxNum = c;
        }

        sum = maxNum * 100;
    }

    printf("%d", sum);
}