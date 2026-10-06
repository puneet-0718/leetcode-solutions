/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */
#include<iostream>
#include<string>
#include<stack>
using namespace std;

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c); // Push opening brackets
            } else {
                if (st.empty()) return false; // No matching open bracket
                char top = st.top();
                if (c == ')' && top != '(') return false;
                if (c == '}' && top != '{') return false;
                if (c == ']' && top != '[') return false;
                st.pop(); // Pop the matched opening bracket
            }
        }
        return st.empty(); // True if all brackets matched
    
    }
};
// @lc code=end

