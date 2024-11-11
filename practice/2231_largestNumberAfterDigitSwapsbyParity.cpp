#include<string>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    int largestInteger(int num) {
        vector<int> vec;
        while(num>0){           
            vec.push_back(num%10);
            num/=10;
        }
        reverse(vec.begin(), vec.end());
        for(int i = 0; i < vec.size()-1; i++){
            for(int j = i+1; j < vec.size(); j++){
                if(vec[i]%2 == vec[j]%2 && vec[i]<vec[j]) swap(vec[i],vec[j]);
            }
        }
        int counter = vec.size()-1, answer = 0;
        for(int n : vec) 
            answer+= n*pow(10, counter--);
        return answer;
    }
};