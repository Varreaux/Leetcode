#include<vector>
#include<numeric>
#include<unordered_map>

using namespace std;

class Solution {
public:

    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        unordered_map<int, int> mapa, mapb;
        int suma = 0, sumb = 0;
        for(int i = 0; i < aliceSizes.size(); i++){
            suma+=aliceSizes[i];
            mapa[aliceSizes[i]]++;
        }
        for(int i = 0; i < bobSizes.size(); i++){
            sumb+=bobSizes[i];
            mapb[bobSizes[i]]++;
        }
        int diff = abs(suma-sumb)/2;
        if(suma-sumb>0){goto aliceHasMore;}
        for(int i = 0; i <aliceSizes.size(); i++){
            if(mapb.count(aliceSizes[i]+diff))
                return {aliceSizes[i],aliceSizes[i]+diff};
        }
    aliceHasMore:
        for(int i = 0; i <bobSizes.size(); i++){
            if(mapa.count(bobSizes[i]+diff))
                return {bobSizes[i]+diff,bobSizes[i]};
        }
        return{0,0};
    }


	//it works but way too slow, time limit exceeded.
//     vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
//         int Asum = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
//         int Bsum = accumulate(bobSizes.begin(), bobSizes.end(), 0);
//         int who = Asum-Bsum;
//         int diff = abs(Asum-Bsum)/2, j;
//         sort(aliceSizes.begin(), aliceSizes.end());
//         sort(bobSizes.begin(), bobSizes.end());
//         vector<int> a (2);
//         if(who>0){goto alice_has_more;}
//         for(int i = 0; i < aliceSizes.size(); i++){
//             a[0]=aliceSizes[i];
//             j=0;
//             while(bobSizes[j]<=a[0]+diff){
//                 if(bobSizes[j]==a[0]+diff){
//                     a[1]=bobSizes[j];
//                     return a;
//                 }
//                 j++;
//             }
//         }
//         return{0,0};
// alice_has_more:  
//         for(int i = 0; i < bobSizes.size(); i++){
//             a[1]=bobSizes[i];
//             j=0;
//             while(aliceSizes[j]<=a[1]+diff){
//                 if(aliceSizes[j]==a[1]+diff){
//                     a[0]=aliceSizes[j];
//                     return a;
//                 }
//                 j++;
//             }
//         }
//         return{0,0};
//     }
	
};