

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cur = 0, ans = 0, n = prices.size();
        for (int i = 1; i < n; i++) {
            cur += prices[i] - prices[i - 1];//4  2  5   3
            cur = max(cur, 0);//4  2   5   5
            ans = max(ans, cur);//4  4   5     5
        }
        return ans;
    }
};