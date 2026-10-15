/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;       // Pointer for the last valid element in nums1
        int j = n - 1;       // Pointer for the last element in nums2
        int k = m + n - 1;   // Pointer for the last available slot in nums1

        // Compare elements from the back and move the larger one to the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // If there are remaining elements in nums2, copy them over
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        
        // Note: If elements remain in nums1 (i >= 0), they are already 
       
    }
};
// @lc code=end

