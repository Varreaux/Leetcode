#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        double size = hand.size()/double(groupSize);
        if(hand.size()%groupSize != 0)
             return false;
        
        sort(hand.begin(), hand.end());
        while(size>0){
            int current = hand[0];
            hand.erase(hand.begin());
            int gsize = 1;
            for(int i = 0; i < hand.size(); i++){
                if(gsize == groupSize)
                        break;
                if(hand[i] == current+1){
                    current = hand[i];
                    hand.erase(hand.begin()+i);
                    i--;
                    if(++gsize == groupSize)
                        break;
                }
                if(i == hand.size()-1)
                    return false;
            }
            size--;
        }
        return true;
    }
};

int main (){
    Solution sol;
    vector<int> hand = {1,2,3,6,2,3,4,7,8};
    int groupSize = 3;
    (sol.isNStraightHand(hand, groupSize)) ? cout<<"true" : cout<<"not true";
}
//beats 73%speed_99%memory