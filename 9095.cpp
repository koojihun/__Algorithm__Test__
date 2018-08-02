/*  백준_1,2,3 더하기  */
//#include <iostream>
//using namespace std;
//int main(void) {
//	int testCase;
//	cin >> testCase;
//	int * ans = new int[testCase];
//	int * input = new int[testCase];
//	for (int cnt = 0; cnt < testCase; cnt++)
//		cin >> input[cnt];
//
//	for (int t = 0; t < testCase; t++) {
//		int * tb = new int[input[t] + 1];
//		tb[0] = 0;	tb[1] = 1; tb[2] = 2; tb[3] = 4;
//		for (int cnt = 4; cnt <= input[t]; cnt++) {
//			tb[cnt] = tb[cnt - 3] + tb[cnt - 2] + tb[cnt - 1];
//		}
//		ans[t] = tb[input[t]];
//		delete[] tb;
//	}
//	for (int cnt = 0; cnt < testCase; cnt++)
//		cout << ans[cnt] << endl;
//	delete[] ans;
//	return 0;
//}