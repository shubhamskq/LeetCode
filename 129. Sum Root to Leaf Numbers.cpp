class Solution {
public:
    int sumNodes(TreeNode* root, int ans){
        if(root == NULL)return 0;
        ans = ans * 10 + root -> val;
        if(root -> left == NULL && root -> right == NULL) return ans;
        int leftSum = sumNodes(root-> left, ans);
        int rightSum = sumNodes(root -> right, ans);
        return leftSum + rightSum;
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        return sumNodes(root, ans);
    }
};
