class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long n = nums.size();
        long long c = 0;
        long long res = 0;
        for(int i = 0 ; i < n ; i++){
          if(nums[i] == 0)c++;
          else{
              res += c * (c+1)/2;
              c = 0;
          }
        }
        res += c * (c+1)/2;
        return res;
    }
};
