class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged_int;

        vector<int> prev_int = intervals[0];
        vector<int> cur_int {0, 0};
        
        size_t size_ints = intervals.size();

        for (size_t ind = 1; ind < size_ints; ++ind)
        {
            cur_int = intervals[ind];
            if (cur_int[0] <= prev_int[1])
            {
                prev_int[1] = max(prev_int[1], cur_int[1]);
            }
            else
            {
                merged_int.push_back(prev_int);
                prev_int = cur_int;
            }
        }
        merged_int.push_back(prev_int);
        return merged_int;
    }
};
