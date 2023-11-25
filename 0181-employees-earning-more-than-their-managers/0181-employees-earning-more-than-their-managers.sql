/* Write your T-SQL query statement below */
select X.name as Employee 
from Employee X inner join Employee Y
on X.managerId=Y.id and X.salary > Y.salary