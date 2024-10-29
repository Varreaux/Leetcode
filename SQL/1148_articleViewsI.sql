select distinct author_id as 'id' from Views
where author_id = viewer_id
order by id asc


-- import pandas as pd

-- def article_views(views: pd.DataFrame) -> pd.DataFrame:
--     sameviews = views[views['author_id']==views['viewer_id']]
--     nodups =sameviews[['author_id']].drop_duplicates()
--     answer = nodups.sort_values(by='author_id')
--     renamed = answer.rename(columns = {'author_id' : 'id'})
--     return renamed[['id']]


-- import pandas as pd

-- def article_views(views: pd.DataFrame) -> pd.DataFrame:
--     return (views[views['author_id'] == views['viewer_id']]
--             [['author_id']]
--             .drop_duplicates()
--             .sort_values(by='author_id')
--             .rename(columns={'author_id': 'id'}))

