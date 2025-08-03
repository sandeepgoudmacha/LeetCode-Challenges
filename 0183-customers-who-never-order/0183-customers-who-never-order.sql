# Write your MySQL query statement below
select c1.name as Customers
from Customers c1
left join Orders c2
on  (c1.id = c2.customerId) where c2.id is NULL;