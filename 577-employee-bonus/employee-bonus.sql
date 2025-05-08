# Write your MySQL query statement below
SELECT NAME, BONUS
FROM Employee E LEFT JOIN BONUS B
ON E.empId = B.empId
WHERE BONUS < 1000 OR BONUS IS NULL;

