class Solution {
public:
   
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int ds = 0;
        for(int i = 0 ; i < nums.size(); i++){
           int b = nums[i];
            sum += nums[i];
            int dsum = 0;
            while(b > 0){
                int r = b%10;
                dsum += r;
                b = b/10;
            }
            ds += dsum;
        }
        
        return abs(sum - ds);
    }
};
