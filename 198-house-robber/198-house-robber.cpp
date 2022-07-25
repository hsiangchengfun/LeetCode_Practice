class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        if(nums.size()==2)return max(nums[0],nums[1]);
        nums[2] +=max(nums[0],0);
        for(int i=3;i<nums.size();i++){
            nums[i]+=max(nums[i-2],nums[i-3]);
        }
        return *max_element(nums.begin(),nums.begin()+nums.size());
        
    }
};