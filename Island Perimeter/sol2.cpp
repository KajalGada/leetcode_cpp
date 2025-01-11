class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        size_t rows{grid.size()}, cols{grid[0].size()};
        int land_cells {0}, land_connected_cells {0};

        for (size_t r = 0; r < rows; ++r)
        {
            for (size_t c = 0; c < cols; ++c)
            {
                // Check if cell is land
                if (grid[r][c])
                {
                    ++land_cells;

                    // Check if bottom cell is land
                    if ( ((r+1) < rows) && grid[r+1][c] )
                    {
                        ++land_connected_cells;
                    }

                    // Check if right cell is land
                    if ( ((c+1) < cols) && grid[r][c+1] )
                    {
                        ++land_connected_cells;
                    }
                }
            }
        }

        // Add 4 perimetter for each land cell and subtract 2 for each connected land cells
        int ans = (4*land_cells) - (2*land_connected_cells);

        return ans;
        
    }
};
