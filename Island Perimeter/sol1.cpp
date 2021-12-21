class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
    
        int rows = grid.size(), cols = grid[0].size();
        int num_occ = 0, common_walls = 0;
        
        // Compute number of occupied island cells and number of common walls between 2 occupied cells.
        for (int r = 0; r < rows; ++r)
        {
            for (int c = 0; c < cols; ++c)
            {
                if (grid[r][c])
                {
                    num_occ += 1;
                    
                    // Check bottom. No need to check top
                    if (((r+1) < rows) && grid[r+1][c])
                    {
                        common_walls += 1;
                    }
                    
                    // Check right. No need to check left
                    if (((c+1) < cols) && grid[r][c+1])
                    {
                        common_walls += 1;
                    }
                }
            }
        }
        
        // 4 for all walls around an occupied cells. 2 for removing from each of 2 adjacent occupied cells
        int ans = (4 * num_occ) - (2 * common_walls);
        
        return ans;
        
    }
};
