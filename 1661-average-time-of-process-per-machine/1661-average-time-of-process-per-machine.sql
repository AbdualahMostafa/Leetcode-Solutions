/* Write your T-SQL query statement below */

-- this type of join belong to (self join == ternary join)

select x.machine_id  , round(avg(y.timestamp - x.timestamp),3) as processing_time
from Activity x join Activity y
on x.machine_id = y.machine_id and x.process_id = y.process_id 
and x.timestamp <y.timestamp 
group by x.machine_id 


