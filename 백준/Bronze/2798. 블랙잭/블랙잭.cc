#include <iostream>
#include <vector>
 using namespace std;

 int main()
 {
	 int n;

	 cin >> n;

	 long target;

	 cin >> target;

	 vector<int> nums;
	 int sum = 0, goal = 0;
	 int min = 9999999;

	 for (int i = 0; i < n; i++)
	 {	
		 int input;
		 cin >> input;
		 nums.push_back(input);
	 }

	 for (int i = 0; i < n - 2; i++)
	 {
		 for (int j = i + 1; j < n - 1; j++)
		 {
			 for (int k = j + 1; k < n; k++)
			 {
				 sum = nums[i] + nums[j] + nums[k];

				 if (target - sum < min && target - sum >= 0)
				 {
					 min = target - sum;
					 goal = sum;
				 }
			 }
		 }
	 }
	 cout << goal;
 }