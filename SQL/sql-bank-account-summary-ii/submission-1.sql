-- Write your query below
select u.name, SUM(t.amount) as balance
FROM users u JOIN transactions t on u.account = t.account
GROUP BY u.account
HAVING SUM(t.amount) > 10000
