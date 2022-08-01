class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        int n = digits.length();
        vector<string> ans;
        vector<vector<char>> vec(8,vector<char>(3));
        vec[0][0] = 'a';
        vec[0][1] = 'b';
        vec[0][2] = 'c';
        vec[1][0] = 'd';
        vec[1][1] = 'e';
        vec[1][2] = 'f';
        vec[2][0] = 'g';
        vec[2][1] = 'h';
        vec[2][2] = 'i';
        vec[3][0] = 'j';
        vec[3][1] = 'k';
        vec[3][2] = 'l';
        vec[4][0] = 'm';
        vec[4][1] = 'n';
        vec[4][2] = 'o';
        vec[5][0] = 'p';
        vec[5][1] = 'q';
        vec[5][2] = 'r';
        vec[5].push_back('s');
        vec[6][0] = 't';
        vec[6][1] = 'u';
        vec[6][2] = 'v';
        vec[7][0] = 'w';
        vec[7][1] = 'x';
        vec[7][2] = 'y';
        vec[7].push_back('z');
        int len=1;
        if(digits.length()== 0)return ans;
        ans.push_back("");
        cout<<len<<endl;
        for(int i=0;i<n;i++){
            
            int ind=0;
            ind = digits[i]-'0'-2;
            vector<string> tmp;
            
            for(int j=0;j<vec[ind].size();j++){
                for(int k=0;k<ans.size();k++){
                    tmp.push_back(ans[k]+vec[ind][j]);
                }
                
            }
            
            ans = tmp;
            
            
            
            
            
            
        }
        
        
        return ans;
        
        
        
        
        
        
        
        
    }
};