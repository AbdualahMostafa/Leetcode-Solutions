/* Write your T-SQL query statement below */


Select T2.id as Id
From Weather T1 inner join Weather T2
on T2.temperature > T1.temperature 
                and 
                datediff(Day,T1.recorddate,T2.recorddate) =1