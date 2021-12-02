#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> count(128, 0);
        for (char c : s) {
            count[c]++;
        }
        int palindrome = 0;
        for (int c : count) {
            palindrome += c / 2 * 2;
        }
        return palindrome < s.size() ? palindrome + 1 : palindrome;
    }
};
// @lc code=end

