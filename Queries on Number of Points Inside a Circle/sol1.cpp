class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        int points_size = points.size(), queries_size = queries.size();
        int qx = 0, qy = 0, qr = 0;
        int px = 0, py = 0;
        vector<int> ans(queries_size);
        float dist = 0, count = 0;
        
        // Loop through all queries
        for (int q_ind = 0; q_ind < queries_size; ++q_ind)
        {
            qx = queries[q_ind][0];
            qy = queries[q_ind][1];
            qr = queries[q_ind][2];
            count = 0;
            
            // For each query, check if each point is part of the circle.
            for (int p_ind = 0; p_ind < points_size; ++p_ind)
            {
                px = points[p_ind][0];
                py = points[p_ind][1];
                
                dist = sqrt(pow(px-qx, 2) + pow(py-qy, 2));
                if (dist <= qr)
                {
                    count += 1;
                }
            }
            ans[q_ind] = count;
        }
        
        return ans;
        
    }
};
