/* Write your T-SQL query statement below */


select p.email
from person p,person pp
where p.email=pp.email
group by p.email
having count(p.email)>1