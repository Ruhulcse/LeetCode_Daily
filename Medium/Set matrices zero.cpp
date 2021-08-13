class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        queue<pair<int,int>>q;
        int row = matrix.size();
        int column = matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(matrix[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        
        while(!q.empty()){
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            for(int r=0;r<row;r++){
                matrix[r][b]=0;
            }
            for(int c=0;c<column;c++){
                matrix[a][c]=0;
            }
        }
        return ;
    }
};
