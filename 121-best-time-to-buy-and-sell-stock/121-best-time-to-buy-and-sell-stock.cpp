class Solution {
public:
    int maxProfit(vector<int>& price) {

        int min_num=1000000,max_delta=-1000000;
        for(int i=0 ;i<price.size();i++){
            
            min_num = min(min_num,price[i]);
            max_delta = max(max_delta,price[i]-min_num);
            
        }
        
        if(max_delta<0)return 0;
        return max_delta;
        
        
        //         vector<int> prices = price;
//         vector<int> prices2 = price;
//         int n = prices.size();
        
//         int max1,max2;
//         bool found=0,found2=0;
//         while(!found){
//             cout<<1;
//             auto itr = max_element( prices.begin() , prices.end() );
//             auto itr2 = min_element( prices.begin() , prices.end() );
//             if(itr - itr2 > 0 ){ 
//                 max1 =  (*itr - *itr2);
//                 found=1;
//                 break;
//             }
//             else prices.erase( itr );
//             if(prices.size()<=1)break;
        
//         }

//         while(!found2){
//             cout<<2;
//             auto itr = max_element( prices2.begin() , prices2.end() );
//             auto itr2 = min_element( prices2.begin() , prices2.end() );
//             if(itr - itr2 > 0 ){ 
//                 max2 =  (*itr - *itr2);
//                 found2=1;
//                 break;
//             }
//             else prices2.erase( itr2 );
//             if(prices2.size()<=1)break;
        
//         }
        
//         if( !found&&!found2 )return 0;
//         if( found&&found2 ){
//             if( max1>max2 )return max1;
//             else return max2;
//         }

        
//         if(max1 < max2 && found2)return max2;
//         else if( max1 < max2 && !found2 )return max1;
//         else if(max1 > max2 && found)return max1;
//         else return max2;

        
    }
};