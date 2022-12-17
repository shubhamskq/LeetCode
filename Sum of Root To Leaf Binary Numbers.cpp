class Solution {
public:
     
     int littleHelp(TreeNode* root, int res){
         if(!root) return 0;

         res = (res << 1) | root -> val;
         if(!root -> left && !root -> right)
              return res;
         
         return littleHelp(root -> left, res) + littleHelp(root -> right, res);
         
     }


    int sumRootToLeaf(TreeNode* root) {
        
         return littleHelp(root, 0);


    }
};
