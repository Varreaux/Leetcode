#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<string>

using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {

        unordered_set<int> myset;
        int answer =0;
        for(char c : s){
            if(myset.find(c)!=myset.end()){
                myset.erase(c);
                answer+=2;
            }
            else
                myset.insert(c);
        }
        if(!myset.empty())
            answer++;
        return answer;
    }

    int longestPalindrome_V2(string s) {
        unordered_map<char, int> m;
        int answer = 0;
        bool skipped = false;
        for(char c : s)
            m[c]++;
        for(auto it = m.begin(); it!=m.end();it++){
            if(it->second>1){
                int temp = it->second;
                answer += temp/2*2;
                if(temp%2==1)
                    skipped = true;
            }
            else
                skipped = true;
        }
        if(skipped)
            answer++;
        return answer;
    }

};

int main(){
    Solution sol;
    string s = "abccccdd";
    cout<<sol.longestPalindrome(s);
}