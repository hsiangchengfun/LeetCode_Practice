class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int ind=0;
        if(strs[0].length()==0)return "";
        if(strs.size()==1)return strs[0];
        while(1){
            for(int i=0;i<strs.size();i++){
                if(strs[i][ind] != strs[0][ind])return ans;
                cout<<i;
                
            }
            ans += strs[0][ind];
            ind ++;
            for(int i=0;i<strs.size();i++){
                if(ind == strs[i].length())return ans;
            }
            
        }
        
        
    }
};