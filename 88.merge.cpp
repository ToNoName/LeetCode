#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1 双指针

//class Solution {
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//		int i = m-- + --n;
//		while (n >= 0) {
//			nums1[i--] = m >= 0 && nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
//		}
//	}
//};


//effective ： 2
//Solution 2 合并后排序 ，暴力解，仅供测试

//class Solution {
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//		int i = m;
//		for (int j = 0; j < n; )
//			nums1[m++] = nums2[j++];
//		sort(nums1.begin(), nums1.end());
//	}
//};


//effective ： 2
//Solution 3  另外申请m + n 个空间进行合并，过于简单不进行实现
