class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       vector<int> l1;
       vector<int> l2;

       dfs(root1, l1);
       dfs(root2, l2);

       return l1 == l2;

    }

    void dfs(TreeNode* node, vector<int>& v){
          if(node == NULL) return;

          if(node -> left  == NULL && node -> right == NULL)
          {
              v.push_back(node -> val);
          }
          dfs(node -> left, v);
          dfs(node -> right, v);

    }
};
