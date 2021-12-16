class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int s_size = s.size();
        if (s_size < 2)
        {
            return s_size;
        }
        
        int max_len = 0, start_ind = 0;
        int s_map[256] = {0};
        
        for (int s_ind = 0; s_ind < s_size; ++s_ind)
        {
            if (s_map[s[s_ind]] != 0)
            {
                max_len = max(max_len, (s_ind - start_ind));
                start_ind = max(start_ind, s_map[s[s_ind]]);
            }
            
            s_map[s[s_ind]] = s_ind + 1;
        }
        
        max_len = max(max_len, (s_size - start_ind));
        
        return max_len; 
        
    }
};
