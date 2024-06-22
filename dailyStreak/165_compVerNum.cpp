//first medium i beat :)
#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>

using namespace std;

class Solution{
public:

    int compareVersion(string version1, string version2){

        vector<int> v1 = makeVector(version1);
        vector<int> v2 = makeVector(version2);

        int diff = v1.size() - v2.size();

        if(diff>0){
            for(int i = 0; i < diff; i++)
                v2.push_back(0);
        }
        else{
            for(int i = 0; i < abs(diff); i++)
                v1.push_back(0);
        }
        
        int maxSize = max(v1.size(), v2.size());

        for(int i = 0; i < maxSize; i++){
            if(v1[i]<v2[i])
                return -1;
            if(v1[i]>v2[i])
                return 1;
        }
            return 0;
    }

    vector<int> makeVector(string version1){
        int indx= 0;
        vector<int> v;
        while (version1.find('.', indx)!=-1){
            int found = version1.find('.', indx);
            int num = stoi(version1.substr(indx, found - indx));
            v.push_back(num);
            indx = found+1;
        }
        v.push_back(stoi(version1.substr(indx, version1.length() - indx)));
        return v;
    }

};


int main(){

    Solution sol;
    int answer = sol.compareVersion("0.1", "1.1");
    cout<<answer;
}