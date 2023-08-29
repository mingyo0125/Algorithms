#include <iostream>
#include <string>
 using namespace std;

 int main()
 {
	 int input;

	 cin >> input;

	 for (int i = 1; i < input; i++)
	 {
		 int sum = i;
		 int temp = i;

		 while (temp != 0)
		 {
			 sum += temp % 10;
			 temp /= 10;
		 }

		 if (sum == input)
		 {
			 cout << i << " ";
			 return 0;
		 }
	 }

	 cout << "0";
 }