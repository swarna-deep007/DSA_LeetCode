/*
    7,1,5,3,6,4
    1,2,3,4,5
    
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) { 
        int profit=0;
        for(int i=1;i<prices.size();i++){  //1 2 3 4
            if(prices[i]>prices[i-1]){
                profit+=prices[i]-prices[i-1];  //4+3=7
            }
        }
        return profit;
    }
};