class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i=2;
        for(i=2;i<cost.size();i++){
            cost[i] += min( cost[i-1],cost[i-2] ); 
            // for(int j=0;j<cost.size();j++)cout<<cost[j]<<" ";
            // cout<<endl;
        }
        // i++;
        int ans;
        ans = min(cost[i-1],cost[i-2]);
        
        return ans;
    }
};