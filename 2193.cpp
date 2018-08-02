/*  백준_이친수  */
//#include <iostream>
//using namespace std;
//int main(void) {
//	int target;
//	cin >> target;
//	long long * dp0 = new long long[target + 1];
//	long long * dp1 = new long long[target + 1];
//	dp0[1] = 0; dp1[1] = 1;
//	for (int cnt = 2; cnt <= target; cnt++) {
//		dp0[cnt] = dp0[cnt - 1] + dp1[cnt - 1];
//		dp1[cnt] = dp0[cnt - 1];
//	}
//	cout << dp0[target] + dp1[target];
//	return 0;
//}