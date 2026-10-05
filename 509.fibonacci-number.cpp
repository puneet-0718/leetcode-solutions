/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */
#include<iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1){
            return n;
        }
        else{
            return fib(n-1)+fib(n-2);
        }

    }
};
// @lc code=end

