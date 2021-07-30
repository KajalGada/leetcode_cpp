class Solution {
public:
    int uniquePaths(int m, int n) {
        
        std::vector<int> cur_row (n, 1);
        
        for (int r_ind = 1; r_ind < m; ++r_ind)
        {
            for (int c_ind = 1; c_ind < n; ++c_ind)
            {
                cur_row[c_ind] += cur_row[c_ind-1];
            }
        }
        
        return cur_row[n-1];
    }
};
