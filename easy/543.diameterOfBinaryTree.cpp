#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1 使用递归进行遍历，深度优先搜索


//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//private:
//	int Max = 0;
//	int lenOfBinaryTree(TreeNode* root) {
//		if (root == NULL)
//			return 0;
//		int l = lenOfBinaryTree(root->left);
//		int r = lenOfBinaryTree(root->right);
//		Max = max(Max, l + r);
//		return max(l, r) + 1;
//	}
//public:
//	int diameterOfBinaryTree(TreeNode* root) {
//		lenOfBinaryTree(root);
//		return Max;
//	}
//};






