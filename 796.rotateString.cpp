
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

//effective ： 1
//Solution 1  从A中每个元素开始遍历一个周期，与B的元素从开头开始对比
//如果相同继续比较，如果不同选取A的下一个元素开始比较

class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.size() != B.size())
            return false;
        if(A.size() == 0)
            return true;
        int len = A.size();
        int i,j,k;
        for(i = 0 ; i < len ; i++){
            k = i;
            for(j = 0 ; j < len ;){
                if(B[j] == A[(k+len)%len]){
                    j++;
                    k++;
                }
                else
                    break;
                if(j == len)
                    return true;
            }
        }
        return false;
    }
};

//effective ： 2  
//Solution 2  拼接两个A得到新的A，然后依次与B比较


class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.size() != B.size())
            return false;
        if(A.size() == 0)
            return true;
        A += A;
        for(int i = 0 ; i < A.size() ;i++){
            int k = i;
            for(int j = 0 ; j < B.size();){
                if(A[k] != B[j])
                    break;
                else{
                    k++;
                    j++;
                }
                if(j == B.size())
                    return true;
            }
        }
        return false;
    }
};