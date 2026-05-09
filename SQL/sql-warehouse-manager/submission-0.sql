-- Write your query below
select w.name as warehouse_name, SUM(p.width * p.length * p.height * w.units) as volume
FROM warehouse w
LEFT JOIN products p ON w.product_id = p.product_id
group by w.name