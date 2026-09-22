-- ──────────────────────────────────────────────────
-- Problem  : 183. Customers Who Never Order
-- Difficulty: Easy
-- Tags     : Database
-- Link     : https://leetcode.com/problems/customers-who-never-order/
-- Runtime  : 646 ms (beats 45%)
-- Memory   : 0B (beats 100%)
-- Language : mysql
-- Copyright: (c) 2026 YathichaC. All rights reserved.
-- Synced by: leetie
-- ──────────────────────────────────────────────────

SELECT c.name Customers FROM Customers c
LEFT JOIN Orders d
ON c.id = d.customerId
WHERE d.customerId IS NULL;
