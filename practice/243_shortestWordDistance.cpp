#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        string prev =""; int idx=-1, prevIdx, minidx = wordsDict.size();
        for(string curr : wordsDict){
            idx++;
            if(curr == word1 ){
                if(prev == "") {prev = word1; prevIdx = idx;}
                if(prev == word1) prevIdx = idx;
                if(prev == word2){
                    minidx = min(minidx, abs(prevIdx-idx));
                    prev = word1; 
                    prevIdx = idx;
                }
            }
            if(curr == word2 ){
                if(prev == "") {prev = word2; prevIdx = idx;}
                if(prev == word2) prevIdx = idx;
                if(prev == word1){
                    minidx = min(minidx, abs(prevIdx-idx));
                    prev = word2; 
                    prevIdx = idx;
                }
            }
        }
        return minidx;
    }
};