# Write your MySQL query statement below
select world.name,world.population,world.area from world where (
world.area>=3000000 OR world.population >=25000000 );