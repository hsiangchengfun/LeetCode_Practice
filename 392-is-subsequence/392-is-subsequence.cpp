class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        while(s.length()>0){
            if(t.length()< 1 )return false;

            auto itr = t.find(s[0]);
            cout<<itr<<endl;
            if(itr == std::string::npos)return false;
            else{
                s.erase(0,1);
                t.erase(0,itr+1); 
                
            }
            cout<<s<<endl<<t<<endl;
            
        }
        return true;
        
        
    }
};