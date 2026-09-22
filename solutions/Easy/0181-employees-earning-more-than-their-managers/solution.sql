-- ──────────────────────────────────────────────────
-- Problem  : 181. Employees Earning More Than Their Managers
-- Difficulty: Easy
-- Tags     : Database
-- Link     : https://leetcode.com/problems/employees-earning-more-than-their-managers/
-- Runtime  : 408 ms (beats 66%)
-- Memory   : 0B (beats 100%)
-- Language : mysql
-- Copyright: (c) 2026 YathichaC. All rights reserved.
-- Synced by: leetie
-- ──────────────────────────────────────────────────

SELECT a.name Employee FROM Employee a
JOIN Employee b
ON a.managerId = b.id
WHERE a.salary > b.salary;