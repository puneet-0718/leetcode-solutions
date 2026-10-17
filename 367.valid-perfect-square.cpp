/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */
#include<iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        // 1 is a perfect square (1 * 1 = 1)
        if (num == 1) return true;
        
        long long left = 1;
        long long right = num / 2; // The square root of num (where num > 1) will never exceed num / 2
        
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;
            
            if (square == num) {
                return true; // Found the perfect square root
            } else if (square < num) {
                left = mid + 1; // Look in the upper half
            } else {
                right = mid - 1; // Look in the lower half
            }
        }
        
        return false; // Loop completed without finding an integer square root
    }
    
};
// @lc code=end

