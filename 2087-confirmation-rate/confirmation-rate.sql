# Write your MySQL query statement below

SELECT S.USER_ID, 

ROUND(
    
    IFNULL(
        SUM(C.ACTION='confirmed') /
        
        COUNT(C.ACTION),
         0 )
    ,2) AS confirmation_rate

FROM Signups  S LEFT JOIN Confirmations C 
ON S.USER_ID = C.USER_ID 
GROUP BY S.USER_ID;
 