#include<string>
#include<vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> indexPairs(string text, vector<string>& words) {
		vector<vector<int>> a;
		for(string word : words){
			if(word.length()>text.length()) continue;
			for(int i = 0; i <= text.length()-word.length(); i++){
				if(word==text.substr(i, word.length())){
					a.push_back({i, i + (int)word.length()-1});
				}
			}
		}
		sort(a.begin(),a.end());
		return a;
	}
};

