// ──────────────────────────────────────────────────
// Problem  : 70. Climbing Stairs
// Difficulty: Easy
// Tags     : Math, Dynamic Programming, Memoization
// Link     : https://leetcode.com/problems/climbing-stairs/
// Runtime  : 0 ms (beats 100%)
// Memory   : 7716000 (beats 88%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    int climbStairs(int n) {
        int prev2 = 0;
        int prev1 = 1;
        int curr = 0;
        for(int i = 0; i < n; i++){
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    }
};