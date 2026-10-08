/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */
#include<iostream>
#include<string>
using namespace std;
// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
                // Map to store Roman numeral values
        unordered_map<char, int> roman = {
            {'I', 1},   {'V', 5},   {'X', 10},
            {'L', 50},  {'C', 100}, {'D', 500},
            {'M', 1000}
        };
        
        int total = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            // If the current value is less than the next value, subtract it
            if (i < n - 1 && roman[s[i]] < roman[s[i + 1]]) {
                total -= roman[s[i]];
            } 
            // Otherwise, add it
            else {
                total += roman[s[i]];
            }
        }
        
        return total;
    
    }
};
// @lc code=end

