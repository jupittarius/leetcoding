#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int idx = 0;
        // for (int num : nums){
        //     if (num != 0){
        //         nums[idx++] = num;
        //     }
        // }

        // while (idx < nums.size() ){
        //     nums[idx++] = 0;
        // }
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }

    }
};
// @lc code=end

