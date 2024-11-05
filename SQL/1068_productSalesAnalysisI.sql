Select b.product_name, a.year, a.price from sales a
left join product b on a.product_id = b.product_id

-- import pandas as pd
-- def sales_analysis(sales: pd.DataFrame, product: pd.DataFrame) -> pd.DataFrame:
--     df = sales.merge(product[['product_id', 'product_name']],on='product_id', how='left')
--     return df[['product_name', 'year','price']]
    
