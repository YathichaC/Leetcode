// ──────────────────────────────────────────────────
// Problem  : 66. Plus One
// Difficulty: Easy
// Tags     : Array, Math
// Link     : https://leetcode.com/problems/plus-one/
// Runtime  : 0 ms (beats 0%)
// Memory   : 8352000 (beats 0%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int tmp = 0;
        int sum = 0;
        for(int i = digits.size()-1; i >= 0; i--){
            if(i == digits.size()-1){
                digits[i] += 1;
            }
            else if(tmp == 1){
                digits[i] += 1;
                tmp = 0;
            }
            if(digits[i] >= 10){
                tmp = 1;
                digits[i] %= 10;
            }
        }
        if(tmp == 1){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};