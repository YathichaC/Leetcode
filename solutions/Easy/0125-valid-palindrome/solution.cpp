// ──────────────────────────────────────────────────
// Problem  : 125. Valid Palindrome
// Difficulty: Easy
// Tags     : Two Pointers, String
// Link     : https://leetcode.com/problems/valid-palindrome/
// Runtime  : 0 ms (beats 0%)
// Memory   : 7896000 (beats 0%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    bool isPalindrome(string s) {
        int trim;
        trim = s.length()/2;
        for(int i = 0 ;i < trim; i++){
            if(s[i] != s[s.length()-1-i]){
                return false;
            }
        }
        return true;
    }
};