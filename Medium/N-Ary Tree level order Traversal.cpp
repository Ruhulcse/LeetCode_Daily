class Solution {
     vector<vector<int>> result;
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root == NULL){
            return result;
        }
        queue<Node* >q;
        q.push(root);
        while(!q.empty()){
            int n= q.size();
            vector<int>temp;
            while(n>0){
                Node* p= q.front();
                q.pop();
                temp.push_back(p->val);
                for(int i=0;i<p->children.size();i++){
                    q.push(p->children[i]);
                }
                n--;
            }
            result.push_back(temp);
        }
        return result;
    }
};
