#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
// 二分查找解法
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int lo = 1, hi = nums.size()-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            int cnt = 0;
            for(int i = 0; i < nums.size(); ++i){
                if(nums[i]<=mid) cnt++;
            }
            if(mid<cnt) hi=mid-1;
            else lo = mid+1;
        }
        return lo;
    }
};
// @lc code=end
