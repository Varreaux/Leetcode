#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        set<pair<int,vector<int>>> s;
        for(int i =0; i < rows; i++){
            for(int j =0; j< cols; j++){
                int dis = abs(i-rCenter) + abs(j-cCenter);
                pair<int, vector<int>> p = make_pair(dis, vector<int>{i, j});
                s.insert(p);
            }
        }
        vector<vector<int>> answer;
        for(auto i =s.begin(); i != s.end(); i++){
            answer.push_back(i->second);
        }
        return answer;
    }
};