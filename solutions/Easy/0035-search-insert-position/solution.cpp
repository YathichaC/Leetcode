// ──────────────────────────────────────────────────
// Problem  : 35. Search Insert Position
// Difficulty: Easy
// Tags     : Array, Binary Search
// Link     : https://leetcode.com/problems/search-insert-position/
// Runtime  : 0 ms (beats 100%)
// Memory   : 13616000 (beats 44%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int m;
        int l = 0;
        int h = nums.size() - 1;
        while (l <= h) {
            m = (l+h) / 2;
            if (nums[m] == target) {
                return m;
            } else if (nums[m] < target) {
                l = m + 1;
            } else {
                h = m - 1;
            }
        }
        return l;
    }
};