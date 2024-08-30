#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int p = 0;
        vector<int> a;
        while(a.size() != matrix.size()*matrix[0].size()){
            for(int i = p; i < matrix[p].size()-p; i++){
                a.push_back(matrix[p][i]);
                if(check(matrix, a)){goto end;}       
            }
            for(int i = p+1; i < matrix.size()-p; i++){
                a.push_back(matrix[i][matrix[0].size()-1-p]);
                if(check(matrix, a)){goto end;}       
            }
            for(int i = matrix[p].size()-2-p; i>=p; i--){
                a.push_back(matrix[matrix.size()-1-p][i]);
                if(check(matrix, a)){goto end;}
            }
            for(int i = matrix.size()-2-p; i>=p+1; i--){
                a.push_back(matrix[i][p]);
                if(check(matrix, a)){goto end;}
            }
            p++;
            end:
        }
        return a;
    }
    
    bool check(vector<vector<int>>& matrix, vector<int>& a){
        if(a.size()==matrix.size()*matrix[0].size())
                    return true;
        return false;
    }
};


int main () {
	Solution sol;
	vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
	vector<int> a = sol.spiralOrder(matrix);
	for(int num : a)
		cout<<num<<", ";
	cout<<endl;
	return 0;
}
