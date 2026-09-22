// ──────────────────────────────────────────────────
// Problem  : 58. Length of Last Word
// Difficulty: Easy
// Tags     : String
// Link     : https://leetcode.com/problems/length-of-last-word/
// Runtime  : 0 ms (beats 100%)
// Memory   : 8824000 (beats 68%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool evercount = false;
        for(int i = s.length()-1; i >= 0; i--){
            if(s[i] != ' '){
                evercount = true;
                count++;
            }
            else{
                if(evercount == true){
                    return count;
                }
            }
        }
        return count;
    }
};