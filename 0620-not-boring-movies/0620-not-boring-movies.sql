/* Write your T-SQL query statement below */


Select id,movie,description,rating
From Cinema
where id % 2 !=0 and description !='boring'
order by rating desc