class Solution {
public:
// int Nextishigh(vector<int>& p,int i,int buy,int& ans){
// if(i>=p.size()){
// return ans;
// }
// //ekcase
// if(p[i]-buy>ans)
// {ans = p[i]-buy;
// Nextishigh(p,i+1,ans);
// }


    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<buy)
            {
                buy=prices[i];
            }
            int currentprofit=prices[i]-buy;
            if(currentprofit>profit){
                profit=currentprofit;
            }
        }
        return profit;





    }
};