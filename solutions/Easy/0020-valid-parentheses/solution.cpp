// ──────────────────────────────────────────────────
// Problem  : 20. Valid Parentheses
// Difficulty: Easy
// Tags     : String, Stack, Bracket Sequences
// Link     : https://leetcode.com/problems/valid-parentheses/
// Runtime  : 0 ms (beats 100%)
// Memory   : 8968000 (beats 37%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top() == '(' && s[i] == ')'){
                st.pop();
            }
            else if(st.top() == '{' && s[i] == '}'){
                st.pop();
            }
            else if(st.top() == '[' && s[i] == ']'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        if(!st.empty()){
            return false;
        }
        else{
            return true;
        }
    }
};