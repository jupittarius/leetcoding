#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int mat_r = mat.size(), mat_c = mat[0].size(), total = r*c;
        if (mat_r*mat_c != total) return mat;
        vector<vector<int>> matrix(r, vector<int>(c) );
        for(int i = 0; i < total; i++){
            matrix[i/c][i%c] = mat[i/mat_c][i%mat_c];
        }
        return matrix;
    }
};
// @lc code=end

