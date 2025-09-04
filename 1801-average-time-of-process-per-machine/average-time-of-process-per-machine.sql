-- # Write your MySQL query statement below

SELECT W1.MACHINE_ID , ROUND(AVG(W2.timestamp - W1.timestamp),3) AS processing_time
FROM ACTIVITY W1 INNER JOIN ACTIVITY W2
ON W1.machine_id =W2.machine_id 
AND W1.process_id = W2.process_id 
AND  W1.activity_type = 'start'
AND W2.activity_type = 'end'
GROUP BY W1.MACHINE_ID;

-- SELECT 
--     a.machine_id,
--     ROUND(AVG(b.timestamp - a.timestamp), 3) AS processing_time
-- FROM Activity a
-- JOIN Activity b
--   ON a.machine_id = b.machine_id
--  AND a.process_id = b.process_id
--  AND a.activity_type = 'start'
--  AND b.activity_type = 'end'
-- GROUP BY a.machine_id;
