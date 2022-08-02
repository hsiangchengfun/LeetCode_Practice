class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        myfunction( "", ans, n, 0 );
        return ans;
    }
    void myfunction( string tmp , vector<string>& ans , int left , int right ){
        
        if( left == 0 && right == 0 ){
            ans.push_back(tmp);
            return;
        }
        
        
        if( right > 0 ) myfunction( tmp + ')', ans , left , right - 1 );
        if( left > 0 ) myfunction( tmp + '(' , ans , left - 1 , right + 1  );
        
        
        
    }
    
};