select tweet_id from tweets
where length(content) > 15

-- import pandas as pd
-- def invalid_tweets(tweets: pd.DataFrame) -> pd.DataFrame:
--     return tweets[tweets['content'].str.len()>15][['tweet_id']]
    