// ──────────────────────────────────────────────────
// Problem  : 28. Find the Index of the First Occurrence in a String
// Difficulty: Easy
// Tags     : Two Pointers, String, String Matching, Z Algorithm, Knuth–Morris–Pratt Algorithm, Boyer–Moore String-Search Algorithm
// Link     : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Runtime  : 0 ms (beats 100%)
// Memory   : 9008000 (beats 74%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    int strStr(string haystack, string needle) {
        bool check = false;
        int pos = haystack.length()-1;
        for(int i = 0; i < haystack.length(); i++){
            if(haystack[i] == needle[0]){
                check = true;
                pos = i;
                for(int j = 1; j < needle.length(); j++){
                    if(i+j < haystack.length()){
                        if(haystack[i+j] != needle[j]){
                            check = false;
                        }
                    }
                    else{
                        return -1;
                    }
                    
                }
                if(check == true){
                    return pos;
                }
            }
        }
        return -1;
    }
};