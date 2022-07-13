class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int> mpa,mpb;
        string a,b;
        for(int i=0;i<s.length();i++){
            if(mpa.find(s[i]) != mpa.end() ){
                a += mpa[s[i]];

            }
            else{
                mpa.insert(make_pair(s[i],mpa.size()+1));
                a+=mpa[s[i]];
            }
        }

        for(int i=0;i<t.length();i++){
            if(mpb.find(t[i]) != mpb.end() ){
                b += mpb[t[i]];

            }
            else{
                mpb.insert(make_pair(t[i],mpb.size()+1));
                b+=mpb[t[i]];
            }
        }

        return (a==b) ? true:false;

    }
};