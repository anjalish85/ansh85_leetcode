# Write your MySQL query statement below
update salary
set sex = case when sex='m' then 'f'
                when sex='f' then 'm' 
        end


# UPDATE salary
# SET sex = CASE WHEN sex = 'f' THEN 'm'
#                WHEN sex = 'm' THEN 'f'
#           END