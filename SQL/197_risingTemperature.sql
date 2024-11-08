Select w1.id from weather w1, weather w2
where datediff(w1.recorddate, w2.recorddate) = 1 and w1.temperature>w2.temperature


-- Same thing
SELECT w1.id
FROM weather w1
JOIN weather w2 ON DATEDIFF(w1.recordDate, w2.recordDate) = 1
WHERE w1.temperature > w2.temperature;