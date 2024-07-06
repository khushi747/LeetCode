# Write your MySQL query statement below
SELECT t1.name, t2.unique_id
FROM EmployeeUNI AS t2
RIGHT JOIN Employees AS t1  ON t1.id=t2.id ;