class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        
        sort(satisfaction.begin(), satisfaction.end());
        
        int cum_sum = 0, cur_sat = 0, max_sat = 0, sat_size = satisfaction.size();
        
        // Check satisfaction for just 1 best dish. Then check for [2nd best dist, 1st best dish], then [3rd, 2nd, 1st] and so on.
        for (int ind = (sat_size-1); ind >= 0; --ind)
        {
            cur_sat += satisfaction[ind] + cum_sum;
            cum_sum += satisfaction[ind];
            
            max_sat = max(max_sat, cur_sat);
            
        }
        
        return max_sat;
        
    }
};
