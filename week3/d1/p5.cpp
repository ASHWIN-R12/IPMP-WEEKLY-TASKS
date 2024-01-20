class Solution {
public:
    int helper(vector<int>&prices,int index,int buy)
    {   
        int profit;
        if(index==prices.size())
            return 0;
        if(buy)
        {
            int yes = -prices[index]+helper(prices,index+1,0);
            int no = helper(prices,index+1,1);
            profit=max(yes,no);


        }
        else
        {
            int yes = prices[index]+helper(prices,index+1,1);
            int no = helper(prices,index+1,0);
            profit=max(yes,no);
        }
        return profit;
    }
    int maxProfit(vector<int>& prices) {
        int ans  = helper(prices,0,1);
        return ans;
    }
};
