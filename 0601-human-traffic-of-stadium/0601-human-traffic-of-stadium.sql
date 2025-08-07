# Write your MySQL query statement below
with hello as
(
    select *,id-row_number() over(order by id asc) as rnk from Stadium
    where people>=100
)

select id, visit_date, people from hello
where rnk in
(
    select rnk
    from hello
    group by rnk
    having count(*) >=3
)
order by visit_date;

