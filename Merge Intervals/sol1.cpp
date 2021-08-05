class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        std::sort(intervals.begin(), intervals.end());
        std::vector<std::vector<int>> ans;
        
        int cur_start = intervals[0][0];
        int cur_end = intervals[0][1];
        int interval_size = intervals.size();
        
        for (int ind = 1; ind < interval_size; ++ind)
        {
            if (intervals[ind][0] <= cur_end)
            {
                cur_end = std::max(intervals[ind][1], cur_end);
            }
            else
            {
                std::vector<int> cur_interval = {cur_start, cur_end};
                ans.push_back(cur_interval);
                
                cur_start = intervals[ind][0];
                cur_end = intervals[ind][1];
                
            }
        }
        
        std::vector<int> cur_interval = {cur_start, cur_end};
        ans.push_back(cur_interval);
        
        return ans;
        
    }
};
