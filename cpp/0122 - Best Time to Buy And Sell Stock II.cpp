class Solution {
public:
    int maxProfit(vector<int>& prices) { 
        int ans=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<prices[i+1]){
                int dif=prices[i+1]-prices[i];
                ans+=dif;
            }
        }return ans;
        
    }
};
