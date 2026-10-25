/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 */
#include<iostream>
#include <climits>
#include <cmath>
using namespace std;

// @lc code=start
class Solution {
public:
    int divide(int dividend, int divisor) {
                // Edge case: overflow handler (-2^31 / -1 = 2^31, which exceeds INT_MAX)
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        // Determine the sign of the final result
        // True if both have the same sign, false if they are different
        bool isPositive = (dividend > 0) == (divisor > 0);

        // Convert to long long absolute values to prevent overflow during intermediate steps
        long long dvd = labs(dividend);
        long long dvs = labs(divisor);
        long long ans = 0;

        // Bit manipulation loop
        while (dvd >= dvs) {
            long long tempDvs = dvs;
            long long multiple = 1;

            // Shift tempDvs to the left (multiply by 2) until doubling it would exceed dvd
            while ((tempDvs << 1) <= dvd) {
                tempDvs <<= 1;
                multiple <<= 1;
            }

            // Subtract the largest shifted divisor chunk from the dividend
            dvd -= tempDvs;
            // Add the corresponding multiple to the answer
            ans += multiple;
        }

        // Apply sign and return the final truncated integer
        return isPositive ? ans : -ans;
    }
};
// @lc code=end

