// ──────────────────────────────────────────────────
// Problem  : 121. Best Time to Buy and Sell Stock
// Difficulty: Easy
// Tags     : Array, Dynamic Programming
// Link     : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Runtime  : 0 ms (beats 0%)
// Memory   : 8152000 (beats 0%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_v = 10001, min_pos = 0;
        int max_v = 0;
        for(int i = 0; i < prices.size(); i++){
            if(min_v > prices[i]){
                min_v = prices[i];
                min_pos = i;
            }
            if(min_pos == prices.size() - 1){
                return 0;
            }
        }
        for(int i = min_pos; i < prices.size(); i++){
            if(max_v < prices[i]){
                max_v = prices[i];
            }
        }
        return max_v - min_v;
    }
};