class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
          return Helper(nums, 0, nums.size()-1);
    }

    TreeNode* Helper(vector<int> nums, int left, int right){

        if(left > right)
             return NULL;

        int mid = (left + right)/2;
        TreeNode* temp = new TreeNode(nums[mid]);
        temp -> left = Helper(nums, left, mid-1);
        temp -> right = Helper(nums, mid+1, right);
    return temp;      
    }
};
