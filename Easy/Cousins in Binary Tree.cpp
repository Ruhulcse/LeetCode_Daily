class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
      
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            int foundx=0,foundy=0;
            while(sz--){
                TreeNode* current = q.front();
                q.pop();
                if(current->left!=NULL&&current->right!=NULL){
                    if(current->left->val==x&&current->right->val==y){
                        return false;
                    }
                     if(current->left->val==y&&current->right->val==x){
                        return false;
                    }
                }
                if(current->val==x){
                    foundx = 1;
                }
                if(current->val==y){
                    foundy = 1;
                }
                if(current->left!=NULL){
                    q.push(current->left);
                }
                if(current->right!=NULL){
                    q.push(current->right);
                }
            }
            if(foundx&&foundy){
                return true;
            }
            
        }
        return false;
    }
};
