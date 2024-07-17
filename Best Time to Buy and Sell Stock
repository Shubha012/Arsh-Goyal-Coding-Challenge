class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = INT_MAX, ans =0;
        int profit = 0;
        for(int i=0; i<n; i++){
            mini = min(mini, prices[i]);
            profit = prices[i]-mini;
            ans = max(ans, profit);
        }
        return ans;
    }
};
