# Write your MySQL query statement below
SELECT t1.name, t2.unique_id
FROM Employees AS t1 
LEFT JOIN EmployeeUNI AS t2 ON t1.id=t2.id ;