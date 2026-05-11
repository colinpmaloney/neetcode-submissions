-- Write your query below
SELECT customer_id, name FROM customers
WHERE customer_id in (
    SELECT o.customer_id FROM orders o
    JOIN product p ON o.product_id = p.product_id
    WHERE order_date BETWEEN '06-01-2020' AND '06-30-2020'
    GROUP BY o.customer_id
    HAVING SUM(p.price * o.quantity) >= 100
) 
AND 
customer_id in (
    SELECT o.customer_id FROM orders o
    JOIN product p ON o.product_id = p.product_id
    WHERE order_date BETWEEN '07-01-2020' AND '07-31-2020'
    GROUP BY o.customer_id
    HAVING SUM(p.price * o.quantity) >= 100
)

