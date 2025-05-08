# Write your MySQL query statement below
SELECT E.NAME FROM EMPLOYEE E
JOIN (
    SELECT managerId FROM EMPLOYEE
    WHERE managerId IS NOT NULL
    GROUP BY managerId
    HAVING COUNT(*) >= 5
) AS M ON E.ID = M.managerId;
