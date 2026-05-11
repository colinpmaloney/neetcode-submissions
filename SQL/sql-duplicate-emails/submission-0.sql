-- Write your query below
select DISTINCT(email) from person
GROUP BY email
HAVING COUNT(email) > 1