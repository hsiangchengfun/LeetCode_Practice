class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> ans(2,0);
        for(int i=0;i<nums.size();i++)mp.insert(make_pair(nums[i],i));
        for(int i=0;i<nums.size();i++){
            if(mp.find(target - nums[i]) != mp.end() && (i != mp[target - nums[i]])) {
                if(mp[target - nums[i]] > i){
                    ans[0] = i;
                    ans[1] = mp[target - nums[i]];
                }
                else {
                    ans[1] = i;
                    ans[0] = mp[target - nums[i]];
                    
                }
            }
            
        }
        return ans;
        
        
        
    }
};