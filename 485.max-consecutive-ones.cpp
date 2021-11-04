#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,i=0, max=0;
        while(i<nums.size()){
            if (nums[i]==1)
            {
                cnt++;
                if(cnt > max) max = cnt;
            }else {
                cnt=0;
            }
            i++;
            
        }
        return max;
    }
};
// @lc code=end

