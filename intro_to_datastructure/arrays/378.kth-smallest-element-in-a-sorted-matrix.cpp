#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
/*
 * @lc app=leetcode id=378 lang=cpp
 *
 * [378] Kth Smallest Element in a Sorted Matrix
 */

// @lc code=start
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m = matrix.size(), n = matrix[0].size();
        int lo = matrix[0][0], hi = matrix[m-1][n-1];
        while (lo <= hi){
            int mid = lo + (hi-lo)/2;
            int cnt = 0;
            for(int i = 0; i < m; i++){
                for (int j = 0; j < n && matrix[i][j]<= mid;j++){
                    cnt++;
                }
            }
            if (cnt < k) lo = mid + 1;
            else hi = mid - 1;
        }
        return lo;

    }
};
// @lc code=end

