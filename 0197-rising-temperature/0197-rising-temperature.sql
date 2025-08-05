# Write your MySQL query statement below
select w.id
 from Weather w, Weather x 
 where datediff(w.recordDate,x.recordDate)=1 
 and w.temperature>x.temperature;
