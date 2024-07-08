# Write your MySQL query statement below

-- Basically we are merging end time with start time in a single table then finding the differece between two times which are present in same row- a2.timestamp-a1.timestamp

SELECT a1.machine_id, round(avg(a2.timestamp-a1.timestamp),3) AS processing_time
FROM activity a1
JOIN activity a2 ON a1.machine_id=a2.machine_id AND a1.process_id=a2.process_id AND a1.activity_type='start' AND a2.activity_type='end'
GROUP BY a1.machine_id;