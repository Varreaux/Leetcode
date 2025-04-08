#include<string>
using namespace std;

class Solution {
	public:
		int partitionString(string s) {
			bool seen[26] = {}; int c = 0;
			for(int i = 0; i < s.length(); i++){
				if(seen[s[i]-'a']){
					fill(begin(seen),end(seen), false);
					c++;
				}
				seen[s[i]-'a'] = true;
			}
			return ++c;
		}
	};
