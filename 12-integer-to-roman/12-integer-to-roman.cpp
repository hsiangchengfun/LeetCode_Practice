class Solution {
public:
    string intToRoman(int num) {
        string ans;
        
        
        while(num!=0){
            if(num>=1000){
                for(int i=0;i<num/1000;i++)ans += 'M';
                num %= 1000;
            }
            else if (num >= 100){
                if(num/100 == 9){
                    ans += "CM";
                    num -= 900;
                }
                else if(num/100 == 4){
                    ans += "CD";
                    num -= 400;
                }
                else{
                    for(int i=0;i<num/500;i++)ans += 'D';
                    num %= 500;
                    for(int i=0;i<num/100;i++)ans += 'C';
                    num %= 100;
                }
                
            }
            else if (num >= 10){
                if(num/10 == 9){
                    ans += "XC";
                    num -= 90;
                }
                else if(num/10 == 4){
                    ans += "XL";
                    num -= 40;
                }
                else{
                    for(int i=0;i<num/50;i++)ans += 'L';
                    num %= 50;
                    for(int i=0;i<num/10;i++)ans += 'X';
                    num %= 10;
                }
            }
            else{
                
                if(num/1 == 9){
                    ans += "IX";
                    num -= 9;
                }
                else if(num/1 == 4){
                    ans += "IV";
                    num -= 4;
                }
                else{
                    for(int i=0;i<num/5;i++)ans += 'V';
                    num %= 5;
                    for(int i=0;i<num/1;i++)ans += 'I';
                    num %= 1;
                }
                
            }
                    
            
        }
        return ans;
        
        
    }
};