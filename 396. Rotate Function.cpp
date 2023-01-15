class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
       int n = nums.size();
       int f = 0, sum = 0;
       for(int i = 0 ; i < n ; i++){
           sum += nums[i];
           f += i * nums[i];
       }
       int res = f;
       for(int i = n-1 ; i > 0 ; i--){
           f = f + sum - n*nums[i];
           res = max(f,res);
       }
   return res;
    }
};
