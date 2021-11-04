#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;/*
 * @lc app=leetcode id=667 lang=cpp
 *
 * [667] Beautiful Arrangement II
 */

// @lc code=start
class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> vec(n);
        vec[0]=1;
        for(int i = 1, interval = k; i <= k; i++, interval--){
            vec[i] = i % 2 == 1 ? vec[i-1] + interval : vec[i-1] - interval;
        }
        for(int i = k + 1; i<n; i++){
            vec[i] = i + 1;
        }
        return vec;
    }
};
// @lc code=end

