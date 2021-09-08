class Solution {
public:
    vector<vector<int>>result;
    void backtracking(int indx,int k, vector<int>&current, int n){
        if(k==current.size()){
            result.push_back(current);
            return;
        }
        for(int i=indx;i<n+1;i++){
            current.push_back(i);
            backtracking(i+1,k,current,n);
            current.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>current;
        backtracking(1,k,current,n);
        return result;
    }
};
