class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j){
        if(i>=0 && i<grid.size() && j<grid[0].size() && grid[i][j] == 1){
            grid[i][j]=0;
            return 1+dfs(grid,i+1,j)+dfs(grid,i-1,j)+dfs(grid,i,j+1)+dfs(grid,i,j-1);
        }
        return 0;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max_area = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    max_area = max(max_area,dfs(grid,i,j));
                }
            }
        }
        return max_area;
    }
};
