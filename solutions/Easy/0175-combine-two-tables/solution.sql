-- ──────────────────────────────────────────────────
-- Problem  : 175. Combine Two Tables
-- Difficulty: Easy
-- Tags     : Database
-- Link     : https://leetcode.com/problems/combine-two-tables/
-- Runtime  : 445 ms (beats 63%)
-- Memory   : 0B (beats 100%)
-- Language : mysql
-- Copyright: (c) 2026 YathichaC. All rights reserved.
-- Synced by: leetie
-- ──────────────────────────────────────────────────

SELECT firstName, lastName, city, state FROM Person
LEFT JOIN Address
ON Person.personId = Address.personId;

