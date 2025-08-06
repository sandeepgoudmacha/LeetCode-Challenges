# Write your MySQL query statement below
WITH hello as(
select s2.name as Department, s1.name as Employee, s1.salary as Salary,

dense_rank() over(partition by s1.departmentId order by s1.salary DESC) as rnk
from Employee s1
join 
Department s2
where s1.departmentId=s2.id
)
select Department, Employee, Salary from hello
where rnk<2;