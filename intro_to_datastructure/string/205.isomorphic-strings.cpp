#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> preIndexOfS(128, 0);
        vector<int> preIndexOfT(128, 0);
        for (int i = 0; i < s.size(); i++) {
            if (preIndexOfS[s[i]] != preIndexOfT[t[i]]) {
                return false;
            }
            preIndexOfS[s[i]] = i + 1;
            preIndexOfT[t[i]] = i + 1;
        }
        return true;
    }
};
// @lc code=end

