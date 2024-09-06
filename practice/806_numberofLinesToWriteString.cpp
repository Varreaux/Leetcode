#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int counter = 0, lines = 1;
        for(int i = 0; i < s.length(); i++){
            if(counter+widths[(int)s[i]-97]>100){
                lines++;
                counter=0;
            }
            counter+=widths[(int)s[i]-97];
        }
        return {lines, counter};
    }
};