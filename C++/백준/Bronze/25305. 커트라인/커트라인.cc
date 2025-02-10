#include <iostream>
#include <algorithm>
 using namespace std;

 int main()
 {
	 int n;
	 int k;

	 cin >> n;
	 cin >> k;

	 int arr[1000];

	 for (int i = 0; i < n; i++)
	 {
		 cin >> arr[i];
	 }

	 sort(arr, arr + n, greater<int>());

	 cout << arr[k - 1];
 } 