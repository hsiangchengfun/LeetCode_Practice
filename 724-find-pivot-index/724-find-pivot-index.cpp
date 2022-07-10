class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tt=0;
        for(int i=0;i<nums.size();i++)tt+=nums[i];
        int now=0;
        // cout<<tt<<endl;
        for(int i=0;i<nums.size();i++){
            
            // cout<<"now "<<now<<" nums "<<nums[i]<<endl;
            if(now*2 == tt-nums[i]){
                return i;
            }
            now += nums[i];
            
        }
        return -1;
    }
};