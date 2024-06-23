#include<iostream>
#include<vector>
#include<cstdlib>
#include<set>

using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int> v (1001, 0);
        set<int> s;
        for(int num : nums)
            s.insert(num);
        
        for(int num : s){
            num = abs(num);
            v[num]++;
        }
        for(int i = v.size()-1; i>=0; i--){
            if(v[i]>=2){
                return i;
            }
        }
        return -1;
    }
};

int main (){
    Solution Sol;
    vector<int> v = {-1,2,-3,3};
    int answer = Sol.findMaxK(v);
    cout<<answer;
    return 0;
}


/*

SECOND SOLUTION
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> s;
        for(int num : nums)
            s.insert(num);

        set<int>::iterator end = prev(s.end());
        
        while(s.size()>=2){
            end = prev(s.end());
            if(*s.begin() == -(*end))
                return *end;
            else if(abs(*s.begin())>abs(*end))
                s.erase(s.begin());
            else
                s.erase(end);
        }
        return -1;
    }
};

SOLUTION FROM THE BEST PERFORMANCE SUBMISSION
class Solution {
public:
    int findMaxK(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = n-1; i >= 0; i--) {
            if (nums[i] > 0 && std::binary_search(nums.begin(), nums.end(), -nums[i])) {
                return nums[i];
            }
        }
        return -1;  // If no such pair found
    }
};
*/