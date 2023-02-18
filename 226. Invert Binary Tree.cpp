class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        //Iterative way:
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* p = st.top();
            st.pop();
            if(p){
                st.push(p -> left);
                st.push(p -> right);
                swap(p -> left, p -> right);
            }
        }
        return root;
    }
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
       // Recursive Way:
       if(root){
       invertTree(root -> left);
       invertTree(root -> right);
       swap(root -> left, root -> right);
       }
       return root;
    }
};
