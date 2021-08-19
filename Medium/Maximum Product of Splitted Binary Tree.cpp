class Solution {
public:
     int mod = 1e9+7;
    long long total_sum=0;
    long long ans=0;
    long long DFS(TreeNode* root){
        if(root){
            return root->val+DFS(root->left)+DFS(root->right);
        }
        return 0;
    }
    long long Maximum(TreeNode* root){
        if(root){
            long long v = root->val+Maximum(root->left)+Maximum(root->right);
            ans = max(ans,v*(total_sum-v));
            return v;
        }
        return 0;
    }
    int maxProduct(TreeNode* root) {
        total_sum = DFS(root);
        Maximum(root);
        return ans%mod;
    }
};
