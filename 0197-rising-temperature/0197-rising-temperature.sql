-- Actually here we are joining two same tables of weather on a condition where b ki recorddate a se ek din ki aage ki ho aur fir us row ki dono temperature (that is temperature of both of these consecutive days) ka difference agar o se bada ho, then that row is in our answer 

SELECT b.id
FROM weather a 
JOIN weather b ON datediff(day, a.recorddate,b.recorddate)=1 
WHERE b.temperature-a.temperature>0;


