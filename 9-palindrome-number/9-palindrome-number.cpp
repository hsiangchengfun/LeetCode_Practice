class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long ori = x  ;
        long long ans=0;
        while(x>0){
            ans*=10;
            ans += (x%10);
            x/=10;
        }        
        
        if( ori == ans )return true;
        else return false;
        
    }
};