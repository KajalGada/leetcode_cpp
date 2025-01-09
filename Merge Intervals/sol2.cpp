class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged_int;
        vector<int> cur_int {0, 0};

        size_t len_int = intervals.size();
        size_t last_ind {0};

        merged_int.push_back(intervals[0]);

        for (size_t ind = 1; ind < len_int; ++ind)
        {
            cur_int = intervals[ind];
            last_ind = merged_int.size() - 1;
            if ( cur_int[0] <= merged_int[last_ind][1] )
            {
                merged_int[last_ind][1] = max(merged_int[last_ind][1], cur_int[1]);
            }
            else
            {
                merged_int.push_back(cur_int);
            }
        }

        return merged_int;
        
    }
};
