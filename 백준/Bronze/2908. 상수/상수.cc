#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string fir, sec;
	string bigger;

	cin >> fir;
	cin >> sec;

	swap(fir[0], fir[2]);
	swap(sec[0], sec[2]);

	bigger = stoi(fir) < stoi(sec) ? sec : fir;

	cout << bigger;

}

