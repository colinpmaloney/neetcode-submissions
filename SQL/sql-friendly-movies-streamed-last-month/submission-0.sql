-- Write your query below
select DISTINCT(c.title) FROM content c
JOIN tv_program tv ON c.content_id = tv.content_id
WHERE c.kids_content = 'Y'
AND c.content_type = 'Movies'
AND tv.program_date LIKE '2020-06%'