//messy but beats 73% :)
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<double> v;
        vector<int> answer;
        for(int i = 0; i < arr.size()-1; i++){
            for (int j = i+1; j < arr.size(); j++){
                double mydouble = (double)arr[i]/arr[j];
                v.push_back(mydouble);
            }
        }
        sort(v.begin(), v.end());
        double target = v[k-1];
        bool found = false;
        for(int i = 0; i < arr.size()-1; i++){
            if(found)
                break;
            for (int j = i+1; j < arr.size(); j++){
                double mydouble = (double)arr[i]/arr[j];
                if(mydouble == target){
                    answer.push_back(arr[i]);
                    answer.push_back(arr[j]);
                    found = true;
                    break;
                }
            }
        }
        return answer;
    }
};

int main(){
    Solution sol;
    int k = 3;
    vector<int> test = {1,2,3,5};
    vector<int> answer = sol.kthSmallestPrimeFraction(test, k);

    for(int num : answer)
        cout<<num<<", ";
    return 0;
}

