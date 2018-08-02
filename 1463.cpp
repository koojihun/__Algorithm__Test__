/*  백준_1로 만들기  */
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(void) {
//	int target;
//	cin >> target;
//	int * tb = new int[target + 1];
//	///////////////////////////////
//	tb[1] = 0;
//	///////////////////////////////
//	for (int cnt = 2; cnt <= target; cnt++) {
//		int min = tb[cnt - 1] + 1;
//		if (cnt % 2 == 0) {
//			if (min > tb[cnt / 2] + 1)
//				min = tb[cnt / 2] + 1;
//		}
//		if (cnt % 3 == 0) {
//			if (min > tb[cnt / 3] + 1)
//				min = tb[cnt / 3] + 1;
//		}
//		tb[cnt] = min;
//	}
//	cout << tb[target];
//	delete[] tb;
//	return 0;
//}