# Write your MySQL query statement below
SELECT W.Id FROM 
WEATHER AS W INNER JOIN WEATHER AS PREVW
ON W.recordDate = (PREVW.recordDate + INTERVAL 1 DAY) 
WHERE W.temperature > PREVW.temperature;