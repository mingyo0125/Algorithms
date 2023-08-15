#include <iostream>
#include <vector>
 using namespace std;

 int main()
 {
	 vector<int> x, y;

	 int findx = 0, findy = 0;

	 for (int i = 0; i < 3; i++)
	 {
		 int inputX, inputY;

		 cin >> inputX >> inputY;

		 x.push_back(inputX);
		 y.push_back(inputY);
	 }

	 if (x[0] != x[1])
	 {
		 if (x[0] != x[2])
		 {
			 findx = x[0];
		 }
		 else
		 {
			 findx = x[1];
		 }
	 }
	 else
	 {
		 findx = x[2];
	 }

	 if (y[0] != y[1])
	 {
		 if (y[0] != y[2])
		 {
			 findy = y[0];
		 }
		 else
		 {
			 findy = y[1];
		 }
	 }
	 else
	 {
		 findy = y[2];
	 }

	 cout << findx << " " << findy;
 }