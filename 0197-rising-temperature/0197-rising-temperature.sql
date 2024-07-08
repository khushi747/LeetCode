SELECT b.id 
FROM Weather a 
JOIN Weather b ON datediff(day,a.recordDate,b.recordDate)=1 
WHERE b.temperature-a.temperature>0;  /* Write your T-SQL query statement below */

