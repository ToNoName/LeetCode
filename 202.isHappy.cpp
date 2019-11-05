#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1  使用快慢指针来进行寻找，慢指针走1步，快指针走2步
//当两个数第一次相等时，即实现了一次循环，如果相等时为1，为快乐数，反之不是

//class Solution {
//private:
//	int setSum(int n) {
//		int sum = 0;
//		while (n > 0) {
//			int temp = n % 10;
//			sum += temp * temp;
//			n /= 10;
//		}
//		return sum;
//	}
//public:
//	bool isHappy(int n) {
//		int low = n, fast = n;
//		do {
//			low = setSum(low);
//			fast = setSum(fast);
//			fast = setSum(fast);
//		} while (low != fast);
//		return low == 1;
//	}
//};








