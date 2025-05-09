# Write your MySQL query statement below
SELECT DATE_FORMAT(trans_date, '%Y-%m') as month,
country, COUNT(*) AS trans_count,
 SUM(CASE WHEN STATE = 'approved' THEN 1 ELSE 0 END) AS  approved_count,
SUM(AMOUNT) AS trans_total_amount,
SUM(CASE WHEN STATE = 'approved' THEN AMOUNT ELSE 0 END) AS  approved_total_amount
FROM Transactions
GROUP BY month, country;