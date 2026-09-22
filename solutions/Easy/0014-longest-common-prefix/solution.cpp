// ──────────────────────────────────────────────────
// Problem  : 14. Longest Common Prefix
// Difficulty: Easy
// Tags     : Array, String, Trie
// Link     : https://leetcode.com/problems/longest-common-prefix/
// Runtime  : 0 ms (beats 100%)
// Memory   : 11604000 (beats 94%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool check = true;
        string ans = "";
        char alp;
        for(int i = 0; i < strs[0].size(); i++){
            alp = strs[0][i];
            for(int j = 0; j < strs.size(); j++){
                if(alp != strs[j][i]){
                    check = false;
                }
            }
            if(check == true){
                ans += alp;
            }
        }
        return ans;
    }
};