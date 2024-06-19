#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long temp = (long)m*(long)k;
        if((temp)>(long)bloomDay.size()){return -1;}
        vector<int>bloomIncrement = bloomDay;
        sort(bloomIncrement.begin(), bloomIncrement.end(), greater<int>());
        int answer = -1;
        int inc = 0; 
        long day = bloomIncrement[inc];
        int flower = 0;
        int bouquet = 0;
        for (int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= day){
                flower++;
                if(flower == k){
                    bouquet++;
                    flower = 0;
                    if(bouquet == m){
                        answer = day;
                        i = -1;
                        bouquet = 0;
                        inc++;
                        if(inc>bloomIncrement.size()-1){return answer;}
                        day = bloomIncrement[inc];
                    }
                }
            }
            else{
                flower = 0;
            }
        }
        return answer;
    }
};