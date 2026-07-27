class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int max_profit=0;
        int sell=INT_MIN,buy =INT_MAX;

        for(int x:nums){
            buy=min(buy,x);
            sell=x;
            max_profit=max(max_profit,abs(buy-sell));
        }

        return max_profit;




    }
};
