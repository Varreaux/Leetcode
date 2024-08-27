#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i = 0, j = letters.size()-1, mid = (i+j)/2;
        if(target>=letters[j] || target<letters[i])
            return letters[0];
        while(i <= j){
            if(letters[mid]==target)
                return helper(letters, mid);
            if(target<letters[mid])
                j = mid-1;
            else
                i = mid+1;
            mid = (i+j)/2;
        }
        return helper(letters, mid);
    }

    char helper(vector<char>& letters, int i){
        char curr = letters[i];
        while(++i < letters.size() && letters[i]==curr){}
        if(letters[i]!=curr)
            return letters[i];
        return letters[0];
    }
};