#include<vector>
using namespace std;

class Solution {
	public:
		int kthFactor(int n, int k) {
			vector<int> small, large;
			for(int i = 1; i * i <= n; i++){
				if(n%i==0){
					small.push_back(i);
					if(n/i!=i) large.push_back(n/i);
				}
			}
			small.insert(small.end(), large.rbegin(), large.rend());
			return k <= small.size() ? small[k-1] : -1;
		}
	};
