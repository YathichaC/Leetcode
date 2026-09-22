// ──────────────────────────────────────────────────
// Problem  : 4. Median of Two Sorted Arrays
// Difficulty: Hard
// Tags     : Array, Binary Search, Divide and Conquer
// Link     : https://leetcode.com/problems/median-of-two-sorted-arrays/
// Runtime  : 0 ms (beats 100%)
// Memory   : 96140000 (beats 9%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double num[2001]={};
        int size = 0;
        for(int i = 0; i < nums1.size(); i++){
            num[i] = nums1[i];
            size++;
        }
        for(int i = 0; i < nums2.size(); i++){
            num[nums1.size()+i] = nums2[i];
            size++;
        }
        sort(num, num+size);
        if(size%2 == 0){
            return (num[size/2]+num[(size/2)-1])/2;
        }
        else{
            return num[size/2];
        }
    }
};