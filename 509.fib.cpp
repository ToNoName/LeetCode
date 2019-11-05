#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1 根据斐波那契数的性质，使用替换法 ，  0ms
//F(0) = 0,   F(1) = 1
//F(N) = F(N - 1) + F(N - 2), 其中 N > 1.

//class Solution {
//public:
//	vector<int> a;
//	int fib(int N) {
//		if (N <= 1)
//			return N;
//		int num0 = 0;
//		int num1 = 1;
//		int temp = 0;
//		for (int i = 2; i <= N && N > 1; i++) {
//			temp = num0 + num1;
//			num0 = num1;
//			num1 = temp;
//		}
//		return temp;
//	}
//};



//effective ： 2
//Solution 1 根据斐波那契数的性质，使用vector存储	4ms

//class Solution {
//public:
//	vector<int> a;
//	int fib(int N) {
//		if (N < 2)
//			return N;
//		vector<int> memo(N + 1, 0);
//		memo[1] = memo[2] = 1;
//		for (int i = 3; i <= N; i++)
//			memo[i] = memo[i - 1] + memo[i - 2];
//		return memo[N];
//	}
//};


