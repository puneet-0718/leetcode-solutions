/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle empty array constraint
        
        int uniqueIndex = 1; // Tracks the position of the next unique element
        
        for (int i = 1; i < nums.size(); i++) {
            // If current element is different from the previous one, it's unique
            if (nums[i] != nums[i - 1]) {
                nums[uniqueIndex] = nums[i]; // Move it forward
                uniqueIndex++; // Increment unique element count
            }
        }
        
        return uniqueIndex; // Returns the new size of the unique array

    
    }
};
// @lc code=end

