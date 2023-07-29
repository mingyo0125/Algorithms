#include <iostream>
#include <string>

using namespace std;

int main()
{
	double sumPoint = 0.0;
	double sumMajor = 0.0;

	string name;
	double point = 0.0;
	string grade;

	for (int i = 0; i < 20; i++)
	{
		double dGrade = 0.0;

		cin >> name >> point >> grade;

		switch (grade[0])
		{
		case 'A':
			dGrade += 4;
			break;
		case 'B':
			dGrade += 3;
			break;
		case 'C':
			dGrade += 2;
			break;
		case 'D':
			dGrade += 1;
			break;
		case 'P':
			continue;

		}

		if (grade[1] == '+')
		{
			dGrade += 0.5;
		}

		sumMajor += dGrade * point;
		sumPoint += point;
	}

	cout << sumMajor / sumPoint;
}
