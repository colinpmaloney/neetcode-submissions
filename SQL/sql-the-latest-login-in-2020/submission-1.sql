-- Write your query below
select user_id, MAX(time_stamp) as last_stamp from logins
WHERE time_stamp BETWEEN '2020-01-01' AND '2021-01-01'
group by user_id
-- group by user_id
