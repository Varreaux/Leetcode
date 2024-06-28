#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newstring = "";
        int counter = 0;
        int ind1 = 0, ind2 = 0;
        while(ind1 != word1.length() && ind2 != word2.length()){
            if(counter%2 == 0){
                newstring += word1[ind1];
                ind1++;
            }
            else{
                newstring += word2[ind2];
                ind2++;
            }
            counter++;
        }
        for(int i = ind1; i < word1.length(); i++)
                newstring += word1[i];
        for(int i = ind2; i < word2.length(); i++)
                newstring += word2[i];
    
    return newstring;
    }

};




int main(){

    string answer;
    Solution sol;
    answer = sol.mergeAlternately("abc", "pqr");

    for(char r : answer)
        cout<<r;

    return 0;    
}
