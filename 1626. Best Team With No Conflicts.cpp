class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = ages.size();
        int dp[n],ans = 0;
        vector<pair<int,int>>p;
        for(int i = 0 ; i < n ; i++){
            p.push_back({ages[i], scores[i]});
        }
        sort(p.begin(), p.end());
        for(int i = 0 ; i < n ; i++){
            dp[i] = p[i].second;
            for(int j = 0 ; j < i ; j++){
                if(p[j].second <= p[i].second){
                    dp[i] = max(dp[i], dp[j]+ p[i].second);
                }
              
            }
              ans = max(ans, dp[i]);
        }
        return ans;
    }
};
