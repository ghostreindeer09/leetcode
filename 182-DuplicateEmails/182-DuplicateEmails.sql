-- Last updated: 8/2/2025, 10:46:54 PM
# Write your MySQL query statement below
SELECT Email
FROM Person
GROUP BY Email
HAVING COUNT(*)>1;