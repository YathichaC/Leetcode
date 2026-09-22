// ──────────────────────────────────────────────────
// Problem  : 9. Palindrome Number
// Difficulty: Easy
// Tags     : Math
// Link     : https://leetcode.com/problems/palindrome-number/
// Runtime  : 4 ms (beats 30%)
// Memory   : 10776000 (beats 16%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    bool isPalindrome(int x) {
        string num;
        num = to_string(x);
        for(int i = 0; i < num.length(); i++){
            if(num[i] != num[num.length()-1-i]){
                return false;
            }
        }
        return true;
    }
};