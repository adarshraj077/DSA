-- Write your PostgreSQL query statement below
SELECT Person.firstName ,Person.lastName, Address.city,Address.state
FROM Person Person
LEFT JOIN Address Address
using (personId);


