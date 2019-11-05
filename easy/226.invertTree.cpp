#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1 使用递归进行遍历，自顶向下

 /* struct TreeNode {
      int val;
     TreeNode *left;
     TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
private:
	TreeNode* reverseTree(TreeNode* root) {
		if (!root)
			return NULL;
		TreeNode* temp = root->left;
		root->left = root->right;
		root->right = temp;
		root->left = reverseTree(root->left);
		root->right = reverseTree(root->right);
		return root;
	}

public:
	TreeNode* invertTree(TreeNode* root) {
		return reverseTree(root);
	}
};*/


//effective 
//Solution 2 使用递归进行遍历，自底向上

// struct TreeNode {
//      int val;
//     TreeNode *left;
//      TreeNode *right;
//      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  };
// 
//class Solution {
//private:
//	TreeNode* reverseTree(TreeNode* root) {
//		if (!root)
//			return NULL;
//		TreeNode* right = reverseTree(root->right);
//		TreeNode* left = reverseTree(root->left);
//		root->left = right;
//		root->right = left;
//		return root;
//	}
//
//public:
//	TreeNode* invertTree(TreeNode* root) {
//		return reverseTree(root);
//	}
//};


//effective ： 
//Solution 3 使用迭代进行遍历

// struct TreeNode {
//	  int val;
//	 TreeNode *left;
//	 TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//class Solution {
//public:
//	TreeNode* invertTree(TreeNode* root) {
//		if (root == NULL) return NULL;
//		queue<TreeNode*> q;
//		q.push(root);
//		while (!q.empty())
//		{
//			TreeNode* current = q.front();
//			TreeNode* temp = NULL;
//			temp = current->left;
//			current->left = current->right;
//			current->right = temp;
//			q.pop();
//			if (current->left != NULL) q.push(current->left);
//			if (current->right != NULL) q.push(current->right);
//		}
//		return root;
//
//	}
//};