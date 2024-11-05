SELECT b.unique_id, a.name FROM employees a
LEFT JOIN employeeUNI b on a.id = b.id


-- import pandas as pd
-- def replace_employee_id(employees: pd.DataFrame, employee_uni: pd.DataFrame) -> pd.DataFrame:
--     df = employees.merge(employee_uni[['id','unique_id']],on='id',how='left')
--     return df[['unique_id', 'name']]