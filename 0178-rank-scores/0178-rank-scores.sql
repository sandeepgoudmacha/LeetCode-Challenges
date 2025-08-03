# Write your MySQL query statement below
select s1.score, count(distinct s2.score) as 'rank' from Scores s1, Scores s2
where s2.score>=s1.score
group by s1.id
order by s1.score DESC;
