#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1  使用vector<int>存储距离，先自前向后查找，然后从后向前查找

// class Solution {
// public:
    // vector<int> shortestToChar(string S, char C) {
        // int len = S.size();
        // int p = -1;
        // vector<int> num(len,-1);
        // for(int i = 0 ; i < len ; i++){
            // if(S[i] == C){
                // p = i;
                // num[i] = 0;
            // }
            // else if(p != -1){
                // num[i] = i - p;
            // }
        // }
        // p = -1;
        // for(int i = len - 1 ; i >= 0 ; i--){
            // if(p != -1)
                // num[i] = min(num[i],p - i);
            // if(S[i] == C)
                // p = i;
            // if(num[i] == -1)
                // num[i] = p - i;
        // }
        // return num;
    // }
// };


//effective ： 2
//Solution 2  使用vector<int> num,p_c 分别存储距离与字符C的所有位置，
//先找出所有C的位置存入p_c中，然后比较距离


// class Solution {
// public:
    // vector<int> shortestToChar(string S, char C) {
        // int len = S.size();
        // int p = -1;
        // vector<int> p_c;
        // vector<int> num(len,INT_MAX);
        // for(int i = 0 ; i < len ; i++)
            // if(S[i] == C)
                // p_c.push_back(i);
        // for(int i = 0 ; i < len ; i++){
            // if(S[i] == C)
                // num[i] = 0;
            // else{
                // for(int j = 0 ; j < p_c.size() ; j++)
                    // num[i] = min(num[i],abs(p_c[j] - i));
            // }
        // }
        // return num;
    // }
// };





