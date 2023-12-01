/* Write your T-SQL query statement below */


Select distinct author_id as id 
From Views
where author_id=viewer_id
order by id