CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  DECLARE xy INT;
  SET xy = N - 1;
  RETURN (
      # Write your MySQL query statement below.
        select distinct salary from Employee order by salary DESC limit xy,1
  );
END