# Write your MySQL query statement below
SELECT contest_id, ROUND((COUNT(register.user_id)*100/(SELECT COUNT(user_id) FROM Users)),2) AS percentage
FROM Register
GROUP BY Contest_id
ORDER BY percentage DESC,contest_id;