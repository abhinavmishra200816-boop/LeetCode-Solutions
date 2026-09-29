
class Solution {
public:
void maxProfitfinder(vector<int>& p,int i,int& minprice,int& maxprofit){
    //bc
    if(i==p.size())return;
    //ek case
    if(p[i]<minprice) minprice=p[i];
    int todayprofit=p[i]-minprice;
    if(maxprofit<todayprofit) maxprofit=todayprofit;

    maxProfitfinder(p,i+1,minprice,maxprofit);
}


    int maxProfit(vector<int>& prices) {
        // int buy = prices[0];
        // int profit = 0;
        // for(int i=1;i<prices.size();i++)
        // {
        //     if(prices[i]<buy)
        //     {
        //         buy=prices[i];
        //     }
        //     int currentprofit=prices[i]-buy;
        //     if(currentprofit>profit){
        //         profit=currentprofit;
        //     }
        // }
        // return profit;
        int minprice = INT_MAX;
        int maxprofit=INT_MIN;
        maxProfitfinder(prices,0,minprice,maxprofit);
        return maxprofit;





    }
};