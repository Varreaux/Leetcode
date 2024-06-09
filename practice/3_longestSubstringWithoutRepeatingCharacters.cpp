#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		unordered_map<char, int> m;
		int counter = 0, maxCounter = 0;
        for(int i = 0; i < s.length(); i ++){
			if(m.count(s[i])){
				if(counter>maxCounter)
					maxCounter = counter;
				counter = 0;
				i = m[s[i]];
				m.clear();
			}
			else{
				counter++;
				m[s[i]] = i;
			}
		}
		return max(maxCounter, counter);
    }
};

int main () {
	Solution sol;
	string s = "aab";
	cout<<sol.lengthOfLongestSubstring(s)<<endl;
	return 0;
}
