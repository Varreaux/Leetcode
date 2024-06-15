#include<iostream>
#include<vector>
#include<map>
#include<functional>

using namespace std;

class Solution{
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int, string> mymap;
        vector<string> answer;
        vector<int> temp = score;
        sort(temp.begin(), temp.end(), greater<int>());
        
        int counter = 0;
        for(int points: temp){
            if(counter == 0)
                mymap.insert(make_pair(points, "Gold Medal"));
            else if(counter == 1)
                mymap.insert(make_pair(points, "Silver Medal"));
            else if(counter == 2)
                mymap.insert(make_pair(points, "Bronze Medal"));
            else
                mymap.insert(make_pair(points, to_string(counter+1)));
            counter++;
        }
        
        for(int points: score)
            answer.push_back(mymap[points]);
        
        return answer;
    }
};


int main (){

    Solution sol;
    vector<int> test = {10,3,8,9,4};
    vector<string> answer = sol.findRelativeRanks(test);

    for(string a : answer)
        cout<<a<<", ";

}
