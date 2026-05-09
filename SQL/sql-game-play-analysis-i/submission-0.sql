-- Write your query below
SELECT player_id, MIN(event_date) AS first_login
FROM activity
group by player_id