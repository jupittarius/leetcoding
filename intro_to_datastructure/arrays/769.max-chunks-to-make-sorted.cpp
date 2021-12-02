#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
 * @lc app=leetcode id=769 lang=cpp
 *
 * [769] Max Chunks To Make Sorted
 */

// @lc code=start
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        vector<int> sorted(n);
        for (int i = 0; i < n; ++i) sorted[i] = i;
        sort(sorted.begin(), sorted.end(), [&arr](int i, int j) { return arr[i] < arr[j]; });
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (sorted[i] == i) ++ans;
        }
        return ans;
        // if (arr.size() == 0) return 0;
        // int ret = 0;
        // int right = arr[0];
        // for (int i = 0; i < arr.size(); i++) {
        //     right =  right > arr[i] ? right : arr[i];
        //     if (right == i) ret++;
        // }
        // return ret;
    }
};
// @lc code=end

