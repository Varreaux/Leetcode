#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){return s;}
        int width = s.length();
        int l = 0;
        vector<vector<char>>vec(numRows,vector<char>(width));
        int k = 0, left = 0, top = 0;
        while(l<s.length()){
            while(k < numRows && l<s.length()){
                vec[top++][left] = s[l++];
                k++;
            }
            top--;k--;
            while(--k>=0 && l<s.length()){
                vec[--top][++left] = s[l++];
            }
            k=1;
            top=1;
        }
        string answer ="";
        for(int i = 0; i < vec.size(); i++){
            for(int j = 0; j<vec[i].size(); j++){
                if(vec[i][j]!='\0')
                    answer+=vec[i][j];
            }
        }
        return answer;
    }
};