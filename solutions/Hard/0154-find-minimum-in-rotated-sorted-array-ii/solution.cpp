// ──────────────────────────────────────────────────
// Problem  : 154. Find Minimum in Rotated Sorted Array II
// Difficulty: Hard
// Tags     : Array, Binary Search
// Link     : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
// Runtime  : 0 ms (beats 100%)
// Memory   : 16224000 (beats 27%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(min > nums[i]){
                min = nums[i];
            }
        }
        return min;
    }
};