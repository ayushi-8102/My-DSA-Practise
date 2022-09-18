# Write your MySQL query statement below

select name AS customers from Customers where NOT customers.id IN(
    select customerId from orders 
);