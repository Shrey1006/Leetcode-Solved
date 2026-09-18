# Write your MySQL query statement below
SELECT b.id
FROM Weather AS a
JOIN Weather AS b
ON b.recordDate = DATE_ADD(a.recordDate, INTERVAL 1 DAY)
WHERE b.temperature > a.temperature;