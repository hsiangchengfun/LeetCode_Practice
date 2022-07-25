class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i=2;
        for(i=2;i<cost.size();i++){
            cost[i] += min( cost[i-1],cost[i-2] ); 
         
        }
        int ans;
        ans = min(cost[i-1],cost[i-2]);
        
        return ans;
    }
};