/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */
#include<iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
              // Edge case: there are no primes strictly less than 2
        if (n <= 2) return 0;
        
        // Vector initialized to true; tracking whether indices are prime
        std::vector<bool> isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;
        
        // Only loop up to sqrt(n) for the outer boundary
        for (int i = 2; i * i < n; ++i) {
            if (isPrime[i]) {
                // Mark multiples of i as composite, starting from i * i
                // Use long long for the accumulator to prevent integer overflow
                for (long long j = (long long)i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        
        // Count the numbers that remain marked as true (prime)
        int primeCount = 0;
        for (int i = 2; i < n; ++i) {
            if (isPrime[i]) {
                primeCount++;
            }
        }
        
        return primeCount;
    
    }
};
// @lc code=end

