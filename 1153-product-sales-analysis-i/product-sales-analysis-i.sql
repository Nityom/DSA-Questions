# Write your MySQL query statement below
select Product.product_name, Sales.year,Sales.price
from Sales
inner join product
On Sales.product_id = Product.product_id;
 