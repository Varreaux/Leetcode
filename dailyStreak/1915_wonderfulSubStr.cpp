//Time complexity failed. It works, but it's just too slow.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    long long wonderfulSubstrings(string word) {
        int counter = 0;
        vector<string> words;
        for(int i = 0; i < word.length(); i++){
            for(int j = i+1; j <= word.length(); j++){
                int countOdd = 0;
                int arr[10]{0};
                for(char c : word.substr(i, j-i)){
                    arr[c-97]++;
                }
                for(int num : arr){
                    if(num%2!=0)
                        countOdd++;
                }
                if (countOdd<2)
                    counter++;
            }
        }
        return counter;        
    }
};


int main (){

    Solution Sol;
    int answer;
    answer = Sol.wonderfulSubstrings("aabb");
    cout<<answer;
    

}