bool fun(TreeNode* root, int v){
        if(root==0)return true;
        else if(root->val!= v) return false;
        return fun(root->left,v)&&fun(root->right,v);
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==0)return true;
        return fun(root,root->val);
      
        
    }
