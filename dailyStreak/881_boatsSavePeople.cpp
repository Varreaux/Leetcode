#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i = 0, j = people.size()-1, boats = 0;
        while(i<j){
            if(people[i]+people[j]<=limit)
                i++;
            j--;
            boats++;
        }
        if(i==j)
            boats++;
        return boats;
    }
};

int main(){
    Solution sol;
    
    vector<int> v = {21,40,16,24,30};
    int limit = 50;
    int answer = sol.numRescueBoats(v, limit);
    cout<<answer;

}