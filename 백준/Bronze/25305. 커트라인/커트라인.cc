#include <iostream>
#include <algorithm>
 using namespace std;

 int main()
 {
	 int n;
	 int a;

	 cin >> n;
	 cin >> a;

	 int arr[1000];

	 for (int i = 0; i < n; i++)
	 {
		 cin >> arr[i];
	 }

	 sort(arr, arr + n, greater<int>());

	 cout << arr[a - 1];
 } 