
#define ll long long 
class Solution {
public:
    string longestPalindrome(string s) {
               
        ll rp,lp;
        ll n_len,max_len=0;
        ll i=0;
        ll head=0;
        
        while(i<s.length()){
            
            rp = i;
            lp = i;
            while(rp < s.length()-1 && s[rp+1] == s[rp] )rp++;
            i = rp +1;
            while(rp < s.length()-1 && lp > 0 && s[rp+1] == s[lp-1]){
                rp++;
                lp--;
            }
            n_len = rp-lp +1;
            
            if( max_len < n_len ){
                head = lp;
                max_len = n_len;
            }
            // cout<<lp<<rp<<" "<<head<<" "<<max_len<<endl;
        }
        return s.substr(head,max_len);
        
        
    }
};