#include<string>
#include<cmath>

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0, j = 0;
        for(int i = columnTitle.length()-1; i >= 0; i--){
            int lett = columnTitle[i]-'A'+1;
            sum+=(lett)*pow(26, j++);
        }
        return sum;
    }
};