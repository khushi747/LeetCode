# Write your MySQL query statement below
SELECT viewer_id as id
FROM Views
WHERE (author_id=viewer_id)
GROUP BY id
ORDER BY viewer_id ASC;