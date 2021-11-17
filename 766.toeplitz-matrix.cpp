#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/*
 * @lc app=leetcode id=766 lang=cpp
 *
 * [766] Toeplitz Matrix
 */

// @lc code=start
class Solution {
public:
    // Given an m x n matrix, return true if the matrix is Toeplitz. Otherwise, return false.
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size()-1, n = matrix[0].size()-1;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] != matrix[i+1][j+1]) return false;
            }
        }
        return true;
    }
};
// @lc code=end

