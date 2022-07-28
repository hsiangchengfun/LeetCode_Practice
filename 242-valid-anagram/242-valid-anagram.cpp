class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> v1(s.length()),v2(t.length());
        
        for(int i=0;i<s.length();i++){
            v1[i] = s[i];
        }
        for(int i=0;i<t.length();i++){
            v2[i] = t[i];
        }
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        string a ,b;
        for(int i=0;i<v1.size();i++){
            a+=v1[i];
        }
        for(int i=0;i<v2.size();i++){
            b+=v2[i];
        }
        
        if(a==b)return true;
        else return false;
        
        
    }
};