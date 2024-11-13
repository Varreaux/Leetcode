#include<string>
using namespace std;

class Solution {
public:

	int countBinarySubstrings(string s) {
        int prev = 0, curr = 1, answer = 0;
        for(int i = 1; i < s.length(); i++){
            if(s[i-1]==s[i])
                curr++;
            else{
                answer+= min(prev, curr);
                prev = curr;
                curr = 1;
            }
        }
        answer+=min(prev, curr);
        return answer;
    }

	//TOO SLOW :(
    int countBinarySubstrings_v2(string s) {
        int i = 0, j = 0, answer = 0;
        for(int i = 0; i < s.length(); i++){
            int first = 1, second = 1, j = i+1;
            while(s[i] == s[j] && j<s.length()){
                first++;
                j++;
            }
            if(j==s.length())continue;
            int temp = s[j++];
            while(temp == s[j] && second<first && j<s.length()){
                second++;
                j++;
            }
            if(first == second)answer++;

        }
        return answer;
    }
};
