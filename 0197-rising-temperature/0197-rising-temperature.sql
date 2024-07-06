/* Write your T-SQL query statement below */
SELECT b.id as id
FROM Weather a
INNER JOIN Weather b
ON datediff(day,a.recordDate,b.recordDate) = 1
AND a.temperature < b.temperature;
