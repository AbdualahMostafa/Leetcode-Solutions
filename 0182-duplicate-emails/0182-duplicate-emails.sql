/* Write your T-SQL query statement below */


select Email
from Person p
group by email
having count(email)>1