// ──────────────────────────────────────────────────
// Problem  : 1. Two Sum
// Difficulty: Easy
// Tags     : Array, Hash Table
// Link     : https://leetcode.com/problems/two-sum/
// Runtime  : 43 ms (beats 26%)
// Memory   : 14072000 (beats 89%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};