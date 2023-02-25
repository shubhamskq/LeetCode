class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxp = 0;
      int c = INT_MAX;
      for(int i = 0 ; i < prices.size() ; i++){
            if(c > prices[i]) c = prices[i];
            if(maxp < prices[i] - c) maxp = prices[i] - c;
      }
      return maxp;
    }
};
