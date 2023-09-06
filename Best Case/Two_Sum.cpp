class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> mp;
       int n = nums.size();
       for(int i = 0 ; i < n ; i++){
           int res = target - nums[i];
           if(mp.count(res)){
               return {mp[res], i};
           }
       }
       return {};
    }
};
