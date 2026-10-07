/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */
#include<iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
              // Negative numbers are not palindromes (e.g., -121 reads as 121-)
        // Numbers ending in 0 are not palindromes (except 0 itself)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        
        // Reverse the second half of the number
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // For even-length numbers: x should equal reversedHalf (e.g., 12 == 12)
        // For odd-length numbers: eliminate the middle digit by dividing by 10 (e.g., 1 == 12/10)
        return x == reversedHalf || x == reversedHalf / 10;
    
    }
};
// @lc code=end

