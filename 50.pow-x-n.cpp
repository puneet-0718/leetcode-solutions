/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */
#include<iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
            long long N = n;
        if (N < 0) {
            return 1.0 / solve(x, -N);
        }
        return solve(x, N);
    }

private:
    double solve(double x, long long n) {
        if (n == 0) return 1.0;
        
        double half = solve(x, n / 2);
        
        // If n is even: half * half
        if (n % 2 == 0) {
            return half * half;
        } 
        // If n is odd: x * half * half
        else {
            return x * half * half;
        }
    }
};
// @lc code=end

