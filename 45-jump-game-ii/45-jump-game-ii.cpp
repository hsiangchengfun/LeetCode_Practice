class Solution {
public:
    int jump(vector<int>& nums) {
        
        int dest=0,start=0,step=0,nextdest=0;
        int n = nums.size();
        while(dest < n-1 ){
            nextdest = dest + 1;
            
            for(int i=start;i<=dest;i++){
                
                nextdest = max( nextdest , nums[i]+i );
                if( nextdest >= n-1 )return step + 1;
                
            }
            
            
            start = dest + 1;
            dest = nextdest;
            step++;

        }
        return step;
        
        
    }
};