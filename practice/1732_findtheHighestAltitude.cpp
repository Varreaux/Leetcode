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
};