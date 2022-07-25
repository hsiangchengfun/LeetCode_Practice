class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tt=0;
        for(int i=0;i<nums.size();i++){
            tt += nums[i];
        }
        int tmp=0;
        for(int i=0;i<nums.size();i++){
            
            if(2*tmp == tt - nums[i])return i;
            tmp += nums[i];
            // if(2*tmp > tt - nums[i+1])return -1;
        }
        return -1;
        
        //         int tt=0;
//         for(int i=0;i<nums.size();i++)tt+=nums[i];
//         int now=0;
//         for(int i=0;i<nums.size();i++){
            
//             if(now*2 == tt-nums[i]){
//                 return i;
//             }
//             now += nums[i];
//         }
//         return -1;
    }
};