#include <iostream>
#include <stdlib.h>
 using namespace std;


 int main()
 {
	 int cnt;

	 cin >> cnt;

	 int smallX = 100000, smallY = 100000, bigX = -100000, bigY = -100000;

	 for (int i = 0; i < cnt; i++)
	 {
		 int x, y;

		 cin >> x >> y;

		 if (x <= smallX) { smallX = x; }
		 if (y <= smallY) { smallY = y; }
		 if (x > bigX) { bigX = x; }
		 if (y > bigY) { bigY = y; }

	 }

	 cout << abs((bigX - smallX)) * abs((bigY - smallY)); 

 }