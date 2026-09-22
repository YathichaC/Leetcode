// ──────────────────────────────────────────────────
// Problem  : 27. Remove Element
// Difficulty: Easy
// Tags     : Array, Two Pointers
// Link     : https://leetcode.com/problems/remove-element/
// Runtime  : 0 ms (beats 100%)
// Memory   : 11648000 (beats 84%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};