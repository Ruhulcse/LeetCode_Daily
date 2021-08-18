class Solution {
public:
    int ans=0;
    void dfs(TreeNode* root, int greatest){
        if(root == nullptr){
            return;
        }
        if(root->val >=greatest){
            ++ans;
            greatest = root->val;
        }
        dfs(root->left,greatest);
        dfs(root->right,greatest);
    }
    int goodNodes(TreeNode* root) {
        int greatest = root->val;
        dfs(root,greatest);
        return ans;
    }
};
