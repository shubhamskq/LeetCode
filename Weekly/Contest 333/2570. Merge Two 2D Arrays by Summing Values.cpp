class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        map<int, int> mp;
        for(auto n : nums1) mp[n[0]] += n[1];
        for(auto m : nums2) mp[m[0]] += m[1];
        for(auto i : mp) ans.push_back({i.first, i.second});
        return ans;
    }
};
