class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int n = matrix.size();
        int x = n-1,y=n-1;
        int lower = matrix[0][0];
        int higher = matrix[n-1][n-1] + 1;
        int num = 0;
        
        while( lower < higher ){
            
            int mid = (lower) + (higher-lower) /2;
            num = 0;
            int ind = n-1;
            
            for(int i=0;i<n;i++){
                while( ind >= 0 && matrix[i][ind] > mid )ind--;
                num += ind + 1;
            }
            
            if( num < k )lower = mid + 1 ;
            else higher = mid;
            cout<<higher<<" "<<mid<<" "<<lower<<endl;
            
        }
        return higher;
        
    }
};