/*  백준_팰린드롬?  */
//#include <iostream>
//using namespace std;
//int main(void) {
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	int n; cin >> n;
//	int* nums = new int[n + 1];
//	for (int cnt = 1; cnt <= n; cnt++)
//		cin >> nums[cnt];
//	int q_num; cin >> q_num;
//	int** qs = new int*[q_num + 1];
//	for (int cnt = 1; cnt <= q_num; cnt++) {
//		qs[cnt] = new int[3];
//	}
//	for (int cnt = 1; cnt <= q_num; cnt++) {
//		cin >> qs[cnt][1] >> qs[cnt][2];
//	}
//	////////////////////////////////////////////////////////////
//	int** map = new int*[n + 1];
//	for (int cnt = 0; cnt <= n; cnt++)
//		map[cnt] = new int[n +  1];
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j < i; j++) {
//			map[i][j] = 0;
//		}
//	}
//	for (int start = n; start >= 1; start--) {
//		for (int end = start; end <= n; end++) {
//			if (start == end) {
//				map[start][end] = 1;
//			}
//			else if (end == start + 1 && nums[start] == nums[end]) {
//				map[start][end] = 1;
//			}
//			else {
//				map[start][end] = map[start + 1][end - 1] * (nums[start] == nums[end]);
//			}
//				
//		}
//	}
//	for (int cnt = 1; cnt <= q_num; cnt++) {
//		cout << map[qs[cnt][1]][qs[cnt][2]] << "\n";
//	}
//	////////////////////////////////////////////////////////////
//	for (int cnt = 0; cnt <= n; cnt++)
//		delete[] map[cnt];
//	delete[] map;
//	delete[] nums;
//	for (int cnt = 1; cnt <= q_num; cnt++) {
//		delete[] qs[cnt];
//	}
//	delete[] qs;
//	return 0;
//}