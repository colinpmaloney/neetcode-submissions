-- Write your query below
select u.name, COALESCE(SUM(r.distance), 0) as travelled_distance
FROM users u LEFT JOIN rides r on u.id = r.user_id
GROUP BY u.id
ORDER BY travelled_distance DESC, name ASC