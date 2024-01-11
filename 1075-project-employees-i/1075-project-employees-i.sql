/* Write your T-SQL query statement below */

Select p.project_id,Round(Avg(experience_years*1.0),2) as average_years 
From Project p join Employee e
On p.employee_id =e.employee_id
Group by p.project_id