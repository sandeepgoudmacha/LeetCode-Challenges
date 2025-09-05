# Write your MySQL query statement below
select name from SalesPerson
where sales_id not in
(
    select sales_id
    from Orders s1,
    Company s2
    where s1.com_id=s2.com_id
    and s2.name='RED'
);
