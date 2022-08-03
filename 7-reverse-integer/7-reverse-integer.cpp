class Solution {
public:
    long long int reverse(int x) {
        bool neg = 0;
        if(x < 0 && x <= (-1*pow(2,31)+2) ){neg = 1;return 0;}
        else if(x<0) {neg = 1; x*=-1;}
        
        vector<int> vec;
        int k = x;
        for(int i=0;i<=log10(k);i++){
            vec.push_back(x%10);
            x/=10;
        }
        int ans=0;
        cout<<vec.size();
        for(int i=0;i<vec.size();i++){
            cout<<"q";
            if(ans >= (pow(2,31)/10) )return 0;
            ans *= 10;
            ans += vec[i];
            
        }
        if(neg)return ans*-1;
        return ans;
        
        
        
    }
};