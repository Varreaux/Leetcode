#include<vector>
using namespace std;

class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int path1 = 0, path2 = 0;
        if(start<destination){
            for(int i = start; i <destination; i++){
                path1 += distance[i];
            }
            for(int i = destination; i <distance.size(); i++){
                path2 += distance[i];
            }
            for(int i = 0; i <start; i++){
                path2 += distance[i];
            }
        }
        else{
            for(int i = start; i <distance.size(); i++){
                path1 += distance[i];
            }
            for(int i = 0; i <destination; i++){
                path1 += distance[i];
            }
            for(int i = destination; i <start; i++){
                path2 += distance[i];
            }
        }
        return min(path1, path2);
    }
};