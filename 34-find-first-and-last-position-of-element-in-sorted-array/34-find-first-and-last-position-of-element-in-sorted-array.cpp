class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto itr = find(nums.begin(),nums.end(),target);
        vector<int> one_vec (2,-1),vec;
        if(itr == nums.end())return one_vec; 
        else{
            vec.push_back(itr - nums.begin());
            reverse(nums.begin(),nums.end());
            auto itr2 = find(nums.begin(),nums.end(),target);
            vec.push_back(nums.size() - (itr2 - nums.begin())-1);
        }
        return vec;
        
    }
};