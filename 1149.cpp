/*  백준_RGB거리  */
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(void) {
//	int num;
//	cin >> num;
//	int * r = new int[num + 1];
//	int * g = new int[num + 1];
//	int * b = new int[num + 1];
//	int * dp_r = new int[num + 1];
//	int * dp_g = new int[num + 1];
//	int * dp_b = new int[num + 1];
//	for (int cnt = 1; cnt <= num; cnt++) {
//		cin >> r[cnt];
//		cin >> g[cnt];
//		cin >> b[cnt];
//	}
//
//	dp_r[1] = r[1];	dp_g[1] = g[1];	dp_b[1] = b[1];
//
//	for (int cnt = 2; cnt <= num; cnt++) {
//		// 1. 이전 단계가 r로 끝났을 경우
//		int tmp_r_g = dp_r[cnt - 1] + g[cnt];
//		int tmp_r_b = dp_r[cnt - 1] + b[cnt];
//
//		// 2. 이전 단계가 g로 끝났을 경우
//		int tmp_g_r = dp_g[cnt - 1] + r[cnt];
//		int tmp_g_b = dp_g[cnt - 1] + b[cnt];
//
//		// 3. 이전 단계가 b로 끝났을 경우
//		int tmp_b_r = dp_b[cnt - 1] + r[cnt];
//		int tmp_b_g = dp_b[cnt - 1] + g[cnt];
//
//		dp_r[cnt] = min(tmp_g_r, tmp_b_r); dp_g[cnt] = min(tmp_b_g, tmp_r_g); dp_b[cnt] = min(tmp_r_b, tmp_g_b);
//	}
//
//	int ret = min(dp_r[num], dp_g[num]);
//	ret = min(ret, dp_b[num]);
//	cout << ret;
//
//	delete[] r;
//	delete[] g;
//	delete[] b;
//	delete[] dp_r;
//	delete[] dp_g;
//	delete[] dp_b;
//	return 0;
//}