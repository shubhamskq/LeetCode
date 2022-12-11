class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
     int n = nums.size();
        sort(nums.begin(), nums.end());
        unordered_set<int> s;
        for(int i = 0 ; i < n; i++){
            s.insert(nums[i]);
        }
        int res = 0;
        for(int i = 0 ; i < n; i++){
            long long t = nums[i];
            int c = 0;
            while(s.find(t) != s.end()){
                c++;
                s.erase(t);
                t = t*t;
            }
            res = max(res, c);
        }
        if(res > 1)
           return res;
       return -1;
    }
};
