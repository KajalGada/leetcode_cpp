class Solution {
public:
    int uniquePaths(int m, int n) {
        
        std::vector<std::vector<int>> grid;
        std::vector<int> row;
        int last_ind = 0;
        
        for (int ind = 0; ind < n; ++ind)
        {
            row.push_back(1);
        }
        grid.push_back(row);
        
        for (int ind = 1; ind < m; ++ind)
        {
            std::vector<int> new_row = {1};
            for (int c_ind = 1; c_ind < n; ++c_ind)
            {
                last_ind = new_row.size() - 1;
                new_row.push_back(new_row[last_ind] + grid[ind-1][c_ind]);
            }
            grid.push_back(new_row);
        }
        
        return grid[m-1][n-1];
        
    }
};
