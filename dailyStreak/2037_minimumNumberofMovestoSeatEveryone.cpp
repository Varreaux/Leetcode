#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int answer = 0;
        for(int i =0; i < students.size(); i++){
            answer+=abs(students[i]-seats[i]);
        }
        return answer;
    }
};


