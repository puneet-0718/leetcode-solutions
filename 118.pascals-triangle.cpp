/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
       std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> triangle(numRows);
        
        for (int i = 0; i < numRows; i++) {
            // A row at 0-indexed position 'i' always has 'i + 1' elements, initialized to 1
            triangle[i].resize(i + 1, 1);
            
            // Calculate the values between the first and last elements
            for (int j = 1; j < i; j++) {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
        
        return triangle; 
    }
};
// @lc code=end

