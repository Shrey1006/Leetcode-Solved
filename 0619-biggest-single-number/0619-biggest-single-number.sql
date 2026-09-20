# Write your MySQL query statement below
SELECT MAX(num) as num
FROM (SELECT num from MyNumbers group by num having count(*)=1 ) AS unique_num;