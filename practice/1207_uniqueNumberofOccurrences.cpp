#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        vector<int> vec;
        for(int num : arr){
            m[num]++;
        }
        for(auto it = m.begin(); it!=m.end(); it++){
            if(find(vec.begin(),vec.end(),it->second)!=vec.end())return false;
            vec.push_back(it->second);
        }
        return true;
    }
    //slighly different
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map1, map2;
        for(int ar:arr){map1[ar]++;}
        for(auto itt = map1.begin(); itt!=map1.end(); ++itt){if(map2.count(itt->second)){return false;}else{map2[itt->second]++;}}
        return true;
    }
};