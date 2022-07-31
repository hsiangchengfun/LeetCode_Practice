class Solution {
public:
    int longestPalindrome(string s) {
        
        vector<int> vec(52,0);
        for(int i=0;i<s.length();i++){
            if(s[i]<='Z' && s[i]>='A') vec[s[i]-'A'+26]++;
            else if(s[i]<='z' && s[i]>='a') vec[s[i]-'a']++;            
        }
        bool odd=0;
        int ans=0;
        
        
        for(int i=0;i<52;i++){
            ans+=2*(int)(vec[i]/2);
            if(vec[i]%2!=0 && !odd)odd=1;
        }
        if(odd)return ans+1;
        return ans;
    }
};