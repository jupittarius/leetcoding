#include <iostream>
#include <vector>
using namespace std;
/*
 * @lc app=leetcode id=565 lang=cpp
 *
 * [565] Array Nesting
 */

// @lc code=start
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int max = 0;
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            int j = i;
            while (nums[j] != -1) {
                int temp = nums[j];
                nums[j] = -1;
                j = temp;
                count++;
            }
            max = max > count ? max : count;
        }
        return max;
    }
};
// @lc code=end

