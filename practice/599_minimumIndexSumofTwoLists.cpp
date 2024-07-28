#include<string>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> answer ={};
        map<string, int>m;
        int a=list1.size()+list2.size();

        for(int i = 0; i<list1.size(); i++)
                m[list1[i]]=i;
        for(int i = 0; i<list2.size(); i++){
            if(m.count(list2[i]))
                if(m[list2[i]]+i<a){
                    a = m[list2[i]]+i;
                    answer.clear();
                    answer.push_back(list2[i]);
                }
                else if(m[list2[i]]+i==a)
                    answer.push_back(list2[i]);
        }
        return answer;
    }
};