#include <iostream>
#include <string>
#include <vector>
 using namespace std;

 int main()
 {
	 vector<string> vec;
	 int cnt = 666;
	 
	 while (vec.size() <= 10000)
	 {
		 string s = to_string(cnt);
		 if (s.find("666") != string::npos)
		 {
			 vec.push_back(s);
		 }
		 cnt++;
	 }

	 int input;

	 cin >> input;

	 cout << vec[input - 1];

	 
 }