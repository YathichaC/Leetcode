-- ──────────────────────────────────────────────────
-- Problem  : 182. Duplicate Emails
-- Difficulty: Easy
-- Tags     : Database
-- Link     : https://leetcode.com/problems/duplicate-emails/
-- Runtime  : 396 ms (beats 73%)
-- Memory   : 0B (beats 100%)
-- Language : mysql
-- Copyright: (c) 2026 YathichaC. All rights reserved.
-- Synced by: leetie
-- ──────────────────────────────────────────────────

SELECT DISTINCT a.Email FROM Person a
JOIN Person b
ON a.email = b.email
WHERE a.id != b.id;
