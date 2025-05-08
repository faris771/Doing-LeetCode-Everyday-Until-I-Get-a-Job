# Write your MySQL query statement below
SELECT DISTINCT AUTHOR_ID  AS ID
FROM VIEWS 
WHERE viewer_id = author_id 
ORDER BY ID ;
