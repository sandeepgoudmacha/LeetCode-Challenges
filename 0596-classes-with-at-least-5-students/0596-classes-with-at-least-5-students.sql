# Write your MySQL query statement below
with hello as
(
    select class, 
    row_number() over(partition by class) as r
    from Courses
)

select distinct class from hello 
where r>=5;