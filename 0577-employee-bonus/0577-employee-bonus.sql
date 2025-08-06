# Write your MySQL query statement below
select s1.name as name, s2.bonus as bonus
from Employee s1
left join 
Bonus s2
on
s1.empId=s2.empId
where s2.bonus < 1000 or s2.bonus IS NULL;;