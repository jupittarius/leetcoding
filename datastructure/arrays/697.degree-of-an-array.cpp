#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/*
 * @lc app=leetcode id=697 lang=cpp
 *
 * [697] Degree of an Array
 */

// @lc code=start
class Solution {
public:
    // Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> m;
        unordered_map<int, int> left;
        unordered_map<int, int> right;
        int max_degree = 0;
        int min_length = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
            if (m[nums[i]] > max_degree) {
                max_degree = m[nums[i]];
                min_length = i + 1;
            }
            if (left.find(nums[i]) == left.end()) {
                left[nums[i]] = i;
            }
            right[nums[i]] = i;
        }
        for (auto it = m.begin(); it != m.end(); it++) {
            if (it->second == max_degree) {
                min_length = min(min_length, right[it->first] - left[it->first] + 1);
            }
        }
        return min_length;
    }
};
// @lc code=end

