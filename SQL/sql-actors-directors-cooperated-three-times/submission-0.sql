-- Write your query below
select actor_id, director_id
from actor_director
GROUP BY (actor_id, director_id)
HAVING count(*) >= 3