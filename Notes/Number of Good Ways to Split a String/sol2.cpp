class Solution {
public:
    int numSplits(string s) {
        
        int ans = 0, s_size = s.size();
        
        vector<int> uniq_fwd (s_size, 0);
        unordered_map <char, int> uniq_occ;
        int count = 0;
        
        for (int ind = 0; ind < s_size; ++ind)
        {
            auto it = uniq_occ.find(s[ind]);
            if (it == uniq_occ.end())
            {
                uniq_occ[s[ind]] = 1;
                count += 1;
            }
            uniq_fwd[ind] = count;
        }
        
        // If all letters are same, there are (s_size-1) good splits.
        if (count == 1)
        {
            return (s_size-1);
        }
        
        vector<int> uniq_rev (s_size, 0);
        unordered_map <char, int> uniq_occ_rev;
        count = 0;
        
        for (int ind = (s_size-1); ind >= 0; --ind)
        {
            auto it = uniq_occ_rev.find(s[ind]);
            if (it == uniq_occ_rev.end())
            {
                uniq_occ_rev[s[ind]] = 1;
                count += 1;
            }
            uniq_rev[ind] = count;
        }
        
        for (int ind = 0; ind < (s_size-1); ++ind)
        {
            if (uniq_fwd[ind] == uniq_rev[ind+1])
            {
                ans += 1;
            }
        }
        
        
        
        
        return ans;
        
    }
};
