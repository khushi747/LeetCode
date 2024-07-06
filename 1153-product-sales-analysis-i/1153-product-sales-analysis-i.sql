# Write your MySQL query statement below
SELECT t1.year, t1.price , t2.product_name
FROM Sales AS t1 LEFT JOIN Product AS t2 ON t1.product_id=t2.product_id;