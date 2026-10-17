/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
     void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            // Swap characters at the left and right pointers
            swap(s[left], s[right]);
            
            // Move pointers closer to the center
            left++;
            right--;
        }
    }
    
};
// @lc code=end

