Select name from customer
where referee_id != 2 or referee_id is null

-- import pandas as pd
-- def find_customer_referee(customer: pd.DataFrame) -> pd.DataFrame:
--     return customer[(customer['referee_id'] != 2)|pd.isna(customer['referee_id'])][['name']]