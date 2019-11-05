#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1 使用小根堆实现

//class KthLargest {
//public:
//	//小根堆
//	priority_queue<int, vector<int>, greater<int> > pq;
//	int size;
//	KthLargest(int k, vector<int>& nums) {
//		size = k;
//		for (int i = 0; i < nums.size(); i++) {
//			pq.push(nums[i]);
//			if (pq.size() > size)
//				pq.pop();
//		}
//	}
//
//	int add(int val) {
//		pq.push(val);
//		if (pq.size() > size)
//			pq.pop();
//		return pq.top();
//	}
//};

