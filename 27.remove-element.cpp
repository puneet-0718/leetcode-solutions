/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Pointer to place the next valid element
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k; // Return the count of elements not equal to val
    }
};
// @lc code=end

