/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */
#include<iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
               // Base cases: if there are 1 or 2 steps, 
        // the number of ways is equal to the number of steps.
        if (n <= 2) {
            return n;
        }
        
        int prev2 = 1; // Represents ways(n-2) -> initially for step 1
        int prev1 = 2; // Represents ways(n-1) -> initially for step 2
        int current = 0;
        
        // Iteratively calculate the ways for each step up to n
        for (int i = 3; i <= n; ++i) {
            current = prev1 + prev2; // Sum of the last two steps
            prev2 = prev1;           // Move prev2 one step forward
            prev1 = current;         // Move prev1 one step forward
        }
        
        return current;
     
    }
};
// @lc code=end

