/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */
#include<iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        
        int low = 1, high = x;
        int ans = 0;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Equivalent to mid * mid <= x, written this way to avoid integer overflow
            if (mid <= x / mid) {
                ans = mid;      // mid could be our potential answer
                low = mid + 1;  // Look for a larger square root in the right half
            } else {
                high = mid - 1; // mid is too large, search the left half
            }
        }
        
        return ans;
    
    }
};
// @lc code=end

