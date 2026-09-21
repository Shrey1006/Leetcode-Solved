# Write your MySQL query statement below
SELECT ROUND( SUM(CASE
        WHEN (order_date = customer_pref_delivery_date) THEN 1
        ELSE 0 END)*100/ COUNT(delivery_id),2) as immediate_percentage
FROM Delivery
WHERE (customer_id, order_date) in (
    SELECT customer_id, min(order_date)
    from Delivery
    GROUP BY customer_id
);