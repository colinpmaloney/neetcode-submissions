-- Write your query below
select u.name, SUM(
    CASE
        WHEN r.distance is null THEN 0 
        ELSE r.distance 
        END
    ) as travelled_distance
FROM users u LEFT JOIN rides r on u.id = r.user_id
GROUP BY u.id
ORDER BY travelled_distance DESC, name ASC