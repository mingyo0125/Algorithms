#include <iostream>
#include <algorithm>
 using namespace std;

 int main()
 {
     int input[3];

     for (int i = 0; i < 3; i++)
     {
         cin >> input[i];
     }

     sort(input, input + 3);

     if (input[0] + input[1] > input[2])
     {
         cout << input[0] + input[1] + input[2];
     }
     else
     {
         cout << (input[0] + input[1]) * 2 - 1;
     }
 }