#include<vector>
#include<numeric>

using namespace std;

class Solution {
public:

	//it works but way too slow, time limit exceeded.
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int Asum = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int Bsum = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        int who = Asum-Bsum;
        int diff = abs(Asum-Bsum)/2, j;
        sort(aliceSizes.begin(), aliceSizes.end());
        sort(bobSizes.begin(), bobSizes.end());
        vector<int> a (2);
        if(who>0){goto alice_has_more;}
        for(int i = 0; i < aliceSizes.size(); i++){
            a[0]=aliceSizes[i];
            j=0;
            while(bobSizes[j]<=a[0]+diff){
                if(bobSizes[j]==a[0]+diff){
                    a[1]=bobSizes[j];
                    return a;
                }
                j++;
            }
        }
        return{0,0};
alice_has_more:  
        for(int i = 0; i < bobSizes.size(); i++){
            a[1]=bobSizes[i];
            j=0;
            while(aliceSizes[j]<=a[1]+diff){
                if(aliceSizes[j]==a[1]+diff){
                    a[0]=aliceSizes[j];
                    return a;
                }
                j++;
            }
        }
        return{0,0};
    }
};