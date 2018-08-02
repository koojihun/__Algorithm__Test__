/*  백준_계단 오르기  */
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(void) {
//	int num;
//	cin >> num;
//	int * val = new int[num + 1];
//	int * tb = new int[num + 1];
//	for (int cnt = 1; cnt <= num; cnt++) {
//		cin >> val[cnt];
//	}
//	tb[0] = 0;
//	tb[1] = val[1];
//	tb[2] = val[1] + val[2];
//	for (int cnt = 3; cnt <= num; cnt++) {
//		tb[cnt] = max(tb[cnt - 3] + val[cnt - 1] + val[cnt], tb[cnt - 2] + val[cnt]);
//	}
//	cout << tb[num];
//	delete[] tb;
//	delete[] val;
//	return 0;
//}