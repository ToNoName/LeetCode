#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1  假设所有人都去A城市，现在要挑n个人去B城市，那么总价格发生变化，
//需要付出代价 costs[i][1] - costs[i][0] ，只要找出代价最小的n个人去，就可以实现价格最小
//举例：若 costs[i][1] - costs[i][0] 为 -30 那么总价变少，选他去

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> diff(costs.size() , 0);
        int num = 0;
        for(int i = 0 ; i < costs.size() ; i++){
            diff[i] = costs[i][1] - costs[i][0];
            num += costs[i][0];
        }
        sort(diff.begin() , diff.end());
        for(int i = 0 ; i < costs.size()/2 ; i++)
            num += diff[i];
        return num;
    }
};

