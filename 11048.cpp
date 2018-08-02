/*  백준_이동하기  */
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(void) {
//	int n, m;
//	cin >> n >> m;
//	int** dp = new int*[n + 1];
//	int** map = new int*[n + 1];
//	for (int cnt = 0; cnt <= n; cnt++) {
//		dp[cnt] = new int[m + 1];
//	}
//	for (int cnt = 0; cnt <= n; cnt++) {
//		map[cnt] = new int[m + 1];
//	}
//	/////////////////////////////////////
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			cin >> map[i][j];
//	/////////////////////////////////////
//	for (int cnt = 0; cnt <= m; cnt++) {
//		dp[0][cnt] = 0;
//	}
//	for (int cnt = 0; cnt <= n; cnt++) {
//		dp[cnt][0] = 0;
//	}
//	/////////////////////////////////////
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			int result = max(dp[i - 1][j], dp[i - 1][j - 1]);
//			result = max(result, dp[i][j - 1]);
//			dp[i][j] = result + map[i][j];
//		}
//	}
//	cout << dp[n][m];
//	/////////////////////////////////////
//	for (int cnt = 0; cnt <= n; cnt++) {
//		delete[] dp[cnt];
//	}
//	for (int cnt = 0; cnt <= n; cnt++) {
//		delete[] map[cnt];
//	}
//	delete[] dp;
//	delete[] map;
//	return 0;
//}