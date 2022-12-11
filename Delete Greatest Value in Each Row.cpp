class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n = grid[0].size();
        int m = grid.size();
        for(int i = 0 ; i < m ; i++){
        sort(grid[i].rbegin(), grid[i].rend());
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
              int val = grid[0][i];
            for(int j = 1 ; j < m ; j++){
                val = max(val, grid[j][i]);
            }
            ans += val;
        }
        return ans;
    }
};
