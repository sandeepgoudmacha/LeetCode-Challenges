# Write your MySQL query statement below
with hello as
(
    select accepter_id as id,count(accepter_id) as c
    from RequestAccepted
    group by accepter_id
     union all
     select requester_id as id, count(requester_id) as c
     from RequestAccepted
     group by requester_id
     ),

 hey as
(
    select id, sum(c) as num
    from hello
    group by id
)

select id, num from hey 
order by num desc
limit 1;

