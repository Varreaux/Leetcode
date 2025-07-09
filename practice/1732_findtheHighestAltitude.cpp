#include<vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxy = 0, curr = 0;
        for (int num : gain){
            curr+= num;
            curr>maxy ? maxy = curr: maxy;
        }
        return maxy;
    }

    //redid this one in one line
    int largestAltitudev2(vector<int>& gain) {
        int sum = 0, max = 0;
        for(int g : gain) max = (sum+=g)>max ? sum : max;
        return max;
    }
};