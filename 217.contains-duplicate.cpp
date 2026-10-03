/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Sort the array to bring duplicates adjacent to each other
        std::sort(nums.begin(), nums.end());
        
        // Check if any neighboring elements are equal
        for (size_t i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] == nums[i + 1]) {
                return true; // Duplicate found
            }
        }
        
        return false;
    }
};
// @lc code=end

