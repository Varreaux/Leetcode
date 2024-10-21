# Write your MySQL query statement below
Select product_id from products 
where (low_fats = "Y" and recyclable = "Y")


-- import pandas as pd
-- def find_products(products: pd.DataFrame) -> pd.DataFrame:
--     answer = products[(products['low_fats'] == 'Y') & (products['recyclable'] == 'Y')][['product_id']]
--     return answer
