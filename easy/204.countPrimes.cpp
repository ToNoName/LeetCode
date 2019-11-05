#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1  使用一个筛子，如果一个数为质数，那么他所有的倍数不是质数，以此清除所有非质数


class Solution {
public:
    int countPrimes(int n) {
        if(n <= 1)
            return 0;
        int count = 0;
        vector<bool> check(n+1,true);
        for(int i = 2 ; i < n ; i++){
            if(check[i]){
                count++;
                for(int j = 2 ; j * i < n ; j++)
                    check[i*j] = false;
            }
        }
        return count;
    }
};