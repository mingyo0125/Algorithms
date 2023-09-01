#include <iostream>
 using namespace std;

 char arr[51][51];
 char whiteArr[8][8] =
 {
	 'W','B','W','B','W','B','W','B',
	 'B','W','B','W','B','W','B','W',
	 'W','B','W','B','W','B','W','B',
	 'B','W','B','W','B','W','B','W',
	 'W','B','W','B','W','B','W','B',
	 'B','W','B','W','B','W','B','W',
	 'W','B','W','B','W','B','W','B',
	 'B','W','B','W','B','W','B','W'
 };

 char black_Arr[8][8] =
 {
	 'B','W','B','W','B','W','B','W',
	 'W','B','W','B','W','B','W','B',
	 'B','W','B','W','B','W','B','W',
	 'W','B','W','B','W','B','W','B',
	 'B','W','B','W','B','W','B','W',
	 'W','B','W','B','W','B','W','B',
	 'B','W','B','W','B','W','B','W',
	 'W','B','W','B','W','B','W','B'
 };

 int White(int x, int y)
 {
	 int cnt = 0;
	 for (int i = 0; i < 8; i++)
	 {
		 for (int j = 0; j < 8; j++)
		 {
			 if (arr[x + i][y + j] != whiteArr[i][j])
				 cnt++;
		 }
	 }
	 return cnt;
 }

 int Black(int x, int y)
 {
	 int cnt = 0;
	 for (int i = 0; i < 8; i++)
	 {
		 for (int j = 0; j < 8; j++)
		 {
			 if (arr[x + i][y + j] != black_Arr[i][j])
				 cnt++;
		 }
	 }
	 return cnt;
 }

 int main()
 {
	 int n, m;
	 int cnt = 51;

	 cin >> n >> m;

	 for (int i = 0; i < n; i++)
	 {
		 for (int j = 0; j < m; j++)
		 {
			 cin >> arr[i][j];
		 }
	 }

	 int white, black;
	 for (int i = 0; i <= n - 8; i++)
	 {
		 for (int j = 0; j <= m - 8; j++)
		 {
			 int curCnt;
			 white = White(i, j);
			 black = Black(i, j);

			 curCnt = white < black ? white : black;

			 if (curCnt < cnt)
			 {
				 cnt = curCnt;
			 }
		 }
	 }
	 std::cout << cnt;
 }