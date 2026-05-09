-- Write your query below
select seller_name from seller
where seller_id not in (
    SELECT o.seller_id from orders o
    WHERE o.sale_date BETWEEN '2020-01-01' and '2020-12-31'
)
order by seller_name