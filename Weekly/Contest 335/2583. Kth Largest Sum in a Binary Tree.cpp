class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
       vector<long long> v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            long long a = 0;
            int n = q.size();
            for(int i = 0 ; i < n ; i++){
                TreeNode* bacha = q.front();
                q.pop();
                a += bacha -> val;
                if(bacha -> left) q.push(bacha -> left);
                if(bacha -> right)q.push(bacha -> right);
            }
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        if(v.size() < k)
              return -1;
        return v[v.size()-k];
    }
};
