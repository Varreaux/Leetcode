#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int target = image[sr][sc], counter = 0;
        queue<pair<int, int>> s;
        pair<int, int> p = make_pair(sr, sc);
        s.push(p);
        image[p.first][p.second]=color;
        while(s.size()!=0){
            p = s.front();
            s.pop();
            if(p.first!=0 && image[(p.first)-1][p.second]==target){
                image[(p.first)-1][p.second]=color;
                s.push(make_pair((p.first)-1, p.second));
            }
            if(p.first!=image.size()-1 && image[(p.first)+1][p.second]==target){
                image[(p.first)+1][p.second]=color;
                s.push(make_pair((p.first)+1, p.second));
            }
            if(p.second!=0 && image[p.first][(p.second)-1]==target){
                image[p.first][(p.second)-1]=color;
                s.push(make_pair(p.first,(p.second)-1));
            }
            if(p.second!=image.size()-1 && image[p.first][(p.second)+1]==target){
                image[p.first][(p.second)+1]=color;
                s.push(make_pair(p.first,(p.second)+1));
            }
        }
        return image;
    }
};


int main () {
	Solution sol;
	vector<vector<int>> image = {{1,1,1},{1,1,0},{1,0,1}};
	int sr = 1, sc = 1, color = 2;
	vector<vector<int>> answer = sol.floodFill(image,sr,sc,color);
	for(int i = 0; i < answer.size(); i++){
		for(auto num : answer[i]){
			cout<<num<<", ";
		}
		cout<<endl;
	}
	return 0;
}
