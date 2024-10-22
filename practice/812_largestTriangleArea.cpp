#include<vector>
using namespace std;

class Solution {
public:
    double getArea(vector<int>& a, vector<int>& b, vector<int>& c){
        return 0.5 * (a[0]*(b[1]-c[1]) + b[0]*(c[1]-a[1]) + c[0]*(a[1]-b[1])); 
    }
    
    double largestTriangleArea(vector<vector<int>>& points) {
        double max = 0.0, area;
        for(int i = 0; i < points.size(); i++){
            for(int j = i+1; j < points.size(); j++){
                for(int k = j+1; k < points.size(); k++){
                    area = abs(getArea(points[i], points[j], points[k]));
                    if(area>max)max=area;
                }
            }
        }
        return max;
    }
};