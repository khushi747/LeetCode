# Write your MySQL query statement below
SELECT employee.name, bonus
FROM Employee
LEFT JOIN Bonus ON Employee.empId=Bonus.empId
WHERE bonus<1000 OR bonus IS NULL;