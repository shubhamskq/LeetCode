class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            double t = q.size();
            double sum = 0;
            for(int i = 0 ; i < t ; i++){
            auto tt = q.front();
            q.pop();
            sum += (tt -> val);
            if(tt -> left) q.push(tt -> left);
            if(tt -> right) q.push(tt -> right);
            }
            res.push_back(sum/t);
        }
        return res;
    }
};
