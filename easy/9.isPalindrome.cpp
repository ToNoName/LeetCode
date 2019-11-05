#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1  如果x为负数或者最后一位为0，则绝对不可能为回文
//生成一个x的倒序值，如果相等则为回文

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int copy = x,back = 0;下
        while(copy != 0){
            int temp = copy % 10;
            if(back > INT_MAX/10)//防止越界
                return false;
            back = back * 10 + temp;
            copy /= 10;
        }
        return back == x;
    }
};


//effective ： 2
//Solution 2  如果x为负数或者最后一位为0(0除外)，则绝对不可能为回文
//获取数字的一半，例：1221 获取后半部分 21 转换为copy值 12，此时copy为12 判断x == copy
//如果为12321 获取后半部分 21 转换为copy值 123 ,此时copy为12 判断 x == copy/10
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0))
            return false;
        int copy = 0 ;
        while(x > copy){
            copy = x % 10 + copy * 10;
            x /= 10;
        }
        return x == copy || x == copy/10;
    }
};