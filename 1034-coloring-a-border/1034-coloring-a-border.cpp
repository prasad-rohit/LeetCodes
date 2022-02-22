class Solution {
public:
    void dfs(vector<vector<int>>& grid,int r,int c,int clr){
        if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size() || grid[r][c]!=clr){
            return;
        }
        grid[r][c] = -clr;
        dfs(grid,r+1,c,clr);
        dfs(grid,r,c+1,clr);
        dfs(grid,r-1,c,clr);
        dfs(grid,r,c-1,clr);
        
        if(r>0 && r<grid.size()-1 && c>0 && c<grid[0].size()-1 && clr == abs(grid[r+1][c]) && clr == abs(grid[r][c+1]) && clr == abs(grid[r][c-1]) && clr == abs(grid[r-1][c])){
            grid[r][c] = clr;
        }
        
    }
    
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        dfs(grid,row,col,grid[row][col]);
        for(int i =0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                if(grid[i][j]<0) grid[i][j] = color;
            }
        }
        return grid;
    }
};