# Write your MySQL query statement below
SELECT e1.name as Employee
FROM Employee as e1
JOIN Employee e2
ON e1.managerId = e2.id && e1.salary > e2.salary;