class Solution {
public:
    vector<vector<int>>res;
    void dfs(TreeNode* root, vector<int>v, int targetSum){
        if(root==NULL){
            v.pop_back();
            return;
        }
        targetSum-=root->val;
        v.push_back(root->val);
        if(targetSum==0&&!root->left&&!root->right){
            res.push_back(v);
            return;
        }
        dfs(root->left,v,targetSum);
        dfs(root->right,v,targetSum);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        if(root==NULL){
            return res;
        }
        dfs(root,v,targetSum);
        return res;
    }
};
