# Write your MySQL query statement below
select s1.name as Employee from Employee s1
join
Employee s2
on 
s1.managerId=s2.id 
and
s1.salary > s2.salary;