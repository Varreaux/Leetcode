#include<vector>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end());
        int maxy = candyType.size()/2, ind = 1, answer = 1;
        if(maxy == 0){return 0;}
        while(maxy>1 && ind!=candyType.size()){
            if(candyType[ind]!=candyType[ind-1]){
                maxy--;
                answer++;
            }
            ind++;
        }
        return answer;
    }
};