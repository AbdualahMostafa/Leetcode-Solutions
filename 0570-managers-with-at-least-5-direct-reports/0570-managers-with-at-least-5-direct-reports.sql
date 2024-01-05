/* Write your T-SQL query statement below */


select e.name
from Employee e,Employee mrg
where mrg.managerId=e.id 
group by e.name,e.id
having count(mrg.id)>=5