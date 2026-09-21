# Write your MySQL query statement below
SELECT customer_id
FROM (SELECT customer_id, count(DISTINCT product_key) as keyss FROM Customer GROUP BY customer_id ) as cnt_key 
WHERE keyss = (SELECT COUNT(*) FROM Product);