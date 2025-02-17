#include<vector>
using namespace std;

class Solution {
public:
	bool checkStraightLine(vector<vector<int>>& coordinates) {
		if(coordinates.size() == 2) return true;
		if (coordinates[1][0] == coordinates[0][0]){
			for(int i = 2; i < coordinates.size(); i++){
					if(coordinates[1][0] != coordinates[i][0])
						return false;
			}
			return true;
		}
		float slope = ((coordinates[1][1] - coordinates[0][1])*1.00) / ((coordinates[1][0] - coordinates[0][0]) *1.00);
		vector<int> dot = coordinates[0];
		for(int i = 2; i < coordinates.size(); i++){
			int hight = coordinates[i][0] - dot[0];
			if(dot[1]+slope*hight != coordinates[i][1])
				return false;
		}
		return true;
	}
};


