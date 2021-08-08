class Solution {
    
public:
    int ans = 0;
    void DFS(TreeNode* root,int minimum,int maximum){
        if(root==NULL){
            return;
        }
        minimum = min(root->val,minimum);
        maximum = max(root->val,maximum);
        
        ans = max(ans,maximum-minimum);
        DFS(root->left,minimum,maximum);
        DFS(root->right,minimum,maximum);
        
       
    }
    int maxAncestorDiff(TreeNode* root) {
       DFS(root,INT_MAX,0);
       return ans;
    }
};
