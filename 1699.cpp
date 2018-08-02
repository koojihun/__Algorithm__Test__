/*  백준_제곱수의 합  */ 
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(void) {
//	int n;
//	cin >> n;
//	int * dp = new int[n + 1];
//	dp[0] = 0;
//	dp[1] = 1;
//	dp[2] = 2;
//	for (int cnt = 3; cnt <= n; cnt++) {
//		int result;
//		for (int tmp = 1; cnt - (tmp * tmp) >= 0; tmp++) {
//			if (tmp == 1)
//				result = dp[cnt - 1] + 1;
//			else {
//				result = min(result, dp[cnt - (tmp * tmp)] + 1);
//			}
//		}
//		dp[cnt] = result;
//	}
//	cout << dp[n];
//	return 0;
//}