#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1 使用动态规划   max(i)  =  Max( max(i-1), prices[i] - min(i-1));  min(i) = Min( min(i-1) , prices[i]);

//class Solution {
//public:
//	int maxProfit(vector<int>& prices) {
//		if (prices.size() <= 1)
//			return 0;
//		int Min = prices[0], Max = 0;
//		for (int i = 1; i < prices.size(); i++) {
//			Max = max(Max, prices[i] - Min);
//			Min = min(Min, prices[i]);
//		}
//		return Max;
//	}
//};

//effective ： 2
//Solution 2 使用双重for循环进行暴力解

//class Solution {
//public:
//	int maxProfit(vector<int>& prices) {
//		if (prices.size() <= 1)
//			return 0;
//		int max_profit = 0;
//		for (int i = 0; i < prices.size(); i++) {
//			for (int j = i + 1; j < prices.size(); j++) {
//				int profit = prices[j] - prices[i];
//				if (profit > max_profit)
//					max_profit = profit;
//			}
//		}
//		return max_profit;
//	}
//};

//effective ： 3
//Solution 3 使用for循环求解 前 i-1 各种最小的质 ， 使用第 i 个值 与其计算最大值

//class Solution {
//public:
//	int maxProfit(vector<int>& prices) {
//		if (prices.size() <= 1)
//			return 0;
//		int Min = prices[0], Max = 0;
//		for (int i = 1; i < prices.size(); i++) {
//			if (prices[i] < Min)
//				Min = prices[i];
//			if ((prices[i] - Min) > Max)
//				Max = prices[i] - Min;
//		}
//		return Max;
//	}
//};
