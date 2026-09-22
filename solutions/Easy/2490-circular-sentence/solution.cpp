// ──────────────────────────────────────────────────
// Problem  : 2490. Circular Sentence
// Difficulty: Easy
// Tags     : String
// Link     : https://leetcode.com/problems/circular-sentence/
// Runtime  : 0 ms (beats 100%)
// Memory   : 9064000 (beats 94%)
// Language : cpp
// Copyright: (c) 2026 YathichaC. All rights reserved.
// Synced by: leetie
// ──────────────────────────────────────────────────

class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.length();
        if (sentence[0] != sentence[n - 1]) {
            return false;
        }
        for (int i = 0; i < n; i++) {
            if (sentence[i] == ' ') {
                if (i + 1 < n && sentence[i - 1] != sentence[i + 1]) {
                    return false;
                }
            }
        }
        return true;
    }
};