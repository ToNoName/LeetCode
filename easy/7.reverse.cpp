#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1  使用INT_MAX 与INT_MIN进行溢出判断

//class Solution {
//public:
//	int reverse(int x) {
//		int rv = 0;
//		while (x != 0) {
//			int temp = x % 10;
//			if (rv > INT_MAX / 10 || rv == INT_MAX / 10 && temp == 7)
//				return 0;
//			if (rv < INT_MIN / 10 || rv == INT_MIN / 10 && temp == -8)
//				return 0;
//			rv = rv * 10 + temp;
//			x /= 10;
//		}
//		return rv;
//	}
//};





