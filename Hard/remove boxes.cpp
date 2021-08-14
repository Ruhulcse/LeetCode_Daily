class Solution {
public:
    int dp[101][101][101];
//     k = extras , if any
    int utils(vector<int>& boxes,int i,int j,int k){
        if(i>j) return 0;
        
        if(dp[i][j][k]!=-1) return dp[i][j][k]; 
        
        int res = INT_MIN;
//         remove current group of boxe(es) and add their score : k from left and 1 for current box
        res = (k+1)*(k+1) + utils(boxes,i+1,j,0); // no extras from prev calls
        
//         check for which groups in b/w to remove first so that left and right parts can be combined to form a larger group
        for(int g = i+1;g<=j;g++){
            if(boxes[i]==boxes[g])
                res = max({ res,
                            utils(boxes,i+1,g-1,0) +
                            utils(boxes,g,j,k+1)
                          });
        }
        return dp[i][j][k] = res;
    }
    int removeBoxes(vector<int>& boxes) {
        int n = boxes.size();
        memset(dp,-1,sizeof(dp));
//         states : -> start,end,extras(if any)
        return utils(boxes,0,n-1,0);
    }
};
