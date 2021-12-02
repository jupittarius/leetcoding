#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
/*
 * @lc app=leetcode id=240 lang=cpp
 *
 * [240] Search a 2D Matrix II
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        if (m == 0 || n == 0 ) return false;
        int row = 0, col = n - 1;
        while (row < m && col >= 0){
            if (target == matrix[row][col]) return true;
            else if(target < matrix[row][col]) col--;
            else row++;
        }
        return false;
    }
};
// @lc code=end

