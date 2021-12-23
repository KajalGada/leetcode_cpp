#include <numeric>

class Solution {
public:
    
    int computeVectorSum(vector<int>& vec)
    {
        int vec_size = vec.size();
        int tot = 0;
        
        for (int ind = 0; ind < vec_size; ++ind)
        {
            tot += vec[ind];
        }
        
        return tot;
    }
    
    int maxSatisfaction(vector<int>& satisfaction) {
        
        sort(satisfaction.begin(), satisfaction.end());
        
        // while (accumulate(satisfaction.begin(), satisfaction.end()) < 0)
        while(computeVectorSum(satisfaction) < 0)
        {
            satisfaction.erase(satisfaction.begin());
        }
        
        int ans = 0, sat_size = satisfaction.size();
        
        for (int ind = 0; ind < sat_size; ++ind)
        {
            ans += (ind+1) * satisfaction[ind];
        }
        
        return ans;
        
    }
};
