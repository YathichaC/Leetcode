// ──────────────────────────────────────────────────
// Problem  : 1957. Delete Characters to Make Fancy String
// Difficulty: Easy
// Tags     : String
// Link     : https://leetcode.com/problems/delete-characters-to-make-fancy-string/
// Runtime  : 42 ms (beats 15%)
// Memory   : 47720000 (beats 5%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    string makeFancyString(string s) {
        queue<char> str;
        int n = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == s[i+1]){
                n++;
            }
            else{
                n = 0;
            }
            if(n < 2){
                str.push(s[i]);
            }
        }
        string result;
        while (!str.empty()) {
            result += str.front();
            str.pop();
        }
        
        return result;
    }
};