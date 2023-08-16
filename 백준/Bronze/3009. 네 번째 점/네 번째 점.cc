#include <iostream>
#include <vector>
 using namespace std;

 int main()
 {
	 vector<int> inputX, inputY;

	 int x = 0, y = 0;

	 for (int i = 0; i < 3; i++)
	 {
		 int inputx, inputy;

		 cin >> inputx >> inputy;

		 inputX.push_back(inputx);
		 inputY.push_back(inputy);
	 }

	 if (inputX[0] != inputX[1])
	 {
		 if (inputX[0] != inputX[2])
		 {
			 x = inputX[0];
		 }
		 else
		 {
			 x = inputX[1];
		 }
	 }
	 else
	 {
		 x = inputX[2];
	 }

	 if (inputY[0] != inputY[1])
	 {
		 if (inputY[0] != inputY[2])
		 {
			 y = inputY[0];
		 }
		 else
		 {
			 y = inputY[1];
		 }
	 }
	 else
	 {
		 y = inputY[2];
	 }

	 cout << x << " " << y;
 }
