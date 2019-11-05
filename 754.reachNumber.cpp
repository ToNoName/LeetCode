#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1  寻找数据的规律，查看可知，所有数字都为1-n的数字相加可得
//1..n相加 为 sum
//其中有些数字取负数，最终得到结果
//如果target 为 sum，则直接返回sum
//如果不是，则判断sum-target是否为偶数
//如果为偶数，则证明，只要将sqrt(sum-target)取负数，即可得到值
//如果为奇数，则继续给sum继续相加，然后找到sum-target为偶数的情况


class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        int i = 1,sum = 0;
        while(1){
            sum += i;
            if(sum >= target && (sum - target) % 2 == 0)
                return i;
            i++;
        }
        return i;
    }
};
