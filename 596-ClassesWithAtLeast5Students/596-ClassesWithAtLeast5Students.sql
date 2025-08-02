-- Last updated: 8/2/2025, 10:46:04 PM
# Write your MySQL query statement below
SELECT class
FROM Courses
GROUP BY class
HAVING count(class)>=5