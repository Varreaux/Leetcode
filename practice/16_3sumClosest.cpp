#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()==3){
            int sum = 0;
            for(int num : nums)
                sum += num;
            return sum;
        }
        map<int, int>m;
        for(int num : nums)
            m[num]++;
        int closest=1000000;
        int tempTar = 1000000;
        bool found = false;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j =i+1; j < nums.size(); j++){
                int num = nums[i]+nums[j];
                if(m.count(target-num)){
                    if(target-num == nums[i] && m[nums[i]]==1)
                        continue;
                    if(target-num == nums[j] && m[nums[j]]==1)
                        continue;
                    return target;
                }
                int up = 0;
                int down = 0;
                int d = -1;
                for(auto it = m.begin(); it != m.end(); it++){
                    if(it->first> (target-num)){
                        if(it->first == nums[i] && m[nums[i]]==1){
                            d--;
                            continue;
                        }
                        if(it->first == nums[j] && m[nums[j]]==1){
                            d--;
                            continue;
                        }
                        found = true;
                        up = it->first;
                        advance(it, d);
                        while((it->first == nums[i] || it->first == nums[j]) && m[it->first]==1)
                             advance(it, -1);
                        down = it->first;
                        break;
                    }
                }
                if(abs(target-num-up)<abs(target-num-down)){
                    if(abs(target-num-up)<closest){
                        closest = abs(target-num-up);
                        tempTar = num+up;
                    }
                }
                else{
                    if(abs(target-num-down)<closest){
                        closest = abs(target-num-down);
                        tempTar = num+down;
                    }    
                }
                    
            }
        }
        if(found)
            return tempTar;

        int a = 0, b = 0, c = 1;
        int looking = target/3;
        
        while(b!=3){
            if(m.count(looking)){
                while(m[looking]>0 && b != 3){
                    a+=looking;
                    b++;
                    m[looking]--;
                }
            }
            if(c%2!=0)
                looking+=c;
            else
                looking-=c;
            c++;
        }
        return a;
    }
};

int main () {
	Solution sol;
	vector<int> nums = {-1,2,1,-4};
	int target = 1;
	cout<<sol.threeSumClosest(nums, target);
	return 0;
}
