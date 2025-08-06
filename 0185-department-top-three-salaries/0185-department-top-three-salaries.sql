# Write your MySQL query statement below
WITH highest_earners as
(
    select s2.name as Department, s1.name as Employee, s1.salary as Salary,
    dense_rank() over(partition by s2.name order by s1.salary desc) as rnk
    from Employee s1
    join 
    Department s2
    on
    s1.departmentId=s2.id 
)

select Department, Employee, Salary 
from highest_earners
where rnk<=3;