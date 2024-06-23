//got it. Speed was good but memory sucked.

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution{
public:

    string reversePrefix(string word, char ch) {

        vector<char> v;
        for(char c : word)
            v.push_back(c);
        
        int where;
        for(int i = 0; i < v.size(); i++){
            if(v[i]==ch){
                swap(v[i], v[0]);
                where = i;
                break;
            }
        }

        for(int i = 1; i < where-i; i++){
            swap(v[i], v[where-i]);
        }

        string answer = "";
        for(char c: v)
            answer+=c;

        return answer;     
        
    }

};

int main (){

    Solution Sol;
    string answer = Sol.reversePrefix("hellothere", 'o');
    cout<<answer<<endl;

    return 0;
}
