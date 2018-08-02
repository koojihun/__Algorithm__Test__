/*  백준_합분해  */
//#include <iostream>
//using namespace std;
//int main(void) {
//	int n, k;
//	cin >> n >> k;
//	int** dp = new int*[n + 1];
//	for (int cnt = 0; cnt <= n; cnt++) {
//		dp[cnt] = new int[k + 1];
//	}
//	////////////////////////////////////
//	for (int cnt = 0; cnt <= n; cnt++) {
//		dp[cnt][0] = 0;
//	}
//	for (int cnt = 0; cnt <= n; cnt++) {
//		dp[cnt][1] = 1;
//	}
//	for (int cnt = 2; cnt <= k; cnt++) {
//		dp[0][cnt] = 1;
//	}
//	////////////////////////////////////
//	for (int nn = 1; nn <= n; nn++) {
//		for (int kk = 2; kk <= k; kk++) {
//			long long result = 0;
//			for (int cnt = 0; cnt <= nn; cnt++) {
//				result += dp[nn - cnt][kk - 1];
//			}
//			dp[nn][kk] = result % 1000000000;
//		}
//	}
//	cout << dp[n][k];
//	////////////////////////////////////
//	for (int cnt = 0; cnt <= n; cnt++) {
//		delete[] dp[cnt];
//	}
//	delete[] dp;
//	return 0;
//}