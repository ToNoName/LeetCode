#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>
using namespace std;

//Solution 1 使用stack进行存储 

//class Solution {
//public:
//	bool isValid(string s) {
//		stack<char> sc;
//		for (char& ch : s) {
//			if (sc.empty())
//				sc.push(ch);
//			else if (ch == ')' && sc.top() == '(')
//				sc.pop();
//			else if (ch == '}' && sc.top() == '{')
//				sc.pop();
//			else if (ch == ']' && sc.top() == '[')
//				sc.pop();
//			else
//				sc.push(ch);
//		}
//		return sc.empty();
//	}
//};


//Solution 2 使用map进行映射,使用stack进行存储

//class Solution {
//public:
//	bool isValid(string s) {
//		if (s.empty())
//			return true;
//		map<char, char> sMap = { {')','('},
//							   {']','['},
//							   {'}','{'} };
//		stack<char> sc;
//		for (char& ch : s) {
//			if (sc.empty())
//				sc.push(ch);
//			else {
//				if (sMap[ch] != sc.top())
//					sc.push(ch);
//				else
//					sc.pop();
//			}
//			if (sc.size() > s.size() / 2)  //左右符号不对称，左右符号数量不同
//				return false;
//		}
//		return sc.empty();
//	}
//};






